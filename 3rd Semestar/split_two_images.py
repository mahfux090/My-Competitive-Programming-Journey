import cv2
import numpy as np
from PIL import Image
import sys
import os

def find_largest_rects(img_path, max_rects=2, min_area_ratio=0.01):
    img = cv2.imread(img_path)
    if img is None:
        raise ValueError("Cannot open image: " + img_path)
    gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    # Blur + adaptive threshold to cope with various backgrounds
    blur = cv2.GaussianBlur(gray, (5,5), 0)
    _, th = cv2.threshold(blur, 0, 255, cv2.THRESH_BINARY + cv2.THRESH_OTSU)
    # Some images have white background, invert if necessary to get foreground darker->white
    # Count white pixels; if too many, invert
    if cv2.countNonZero(th) > th.size * 0.7:
        th = cv2.bitwise_not(th)
    # Morphology to close small gaps
    kernel = cv2.getStructuringElement(cv2.MORPH_RECT, (7,7))
    closed = cv2.morphologyEx(th, cv2.MORPH_CLOSE, kernel)
    contours, _ = cv2.findContours(closed, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    h, w = gray.shape
    min_area = w * h * min_area_ratio

    rects = []
    for cnt in contours:
        area = cv2.contourArea(cnt)
        if area < min_area:
            continue
        # approximate polygon and get bounding rect
        peri = cv2.arcLength(cnt, True)
        approx = cv2.approxPolyDP(cnt, 0.02 * peri, True)
        x, y, ww, hh = cv2.boundingRect(approx)
        rects.append((area, (x, y, ww, hh)))

    # sort by area desc and take top max_rects
    rects = sorted(rects, key=lambda x: x[0], reverse=True)[:max_rects]
    boxes = [r[1] for r in rects]
    # If we found fewer than requested, try fallback: split image vertically/horizontally
    if len(boxes) < max_rects:
        # fallback split vertically in middle
        if w >= h:
            mid = w // 2
            boxes = [(0,0,mid,h), (mid,0,w-mid,h)]
        else:
            mid = h // 2
            boxes = [(0,0,w,mid), (0,mid,w,h-mid)]
    return boxes

def crop_and_save(img_path, boxes, out_prefix="out"):
    img = Image.open(img_path)
    saved = []
    for i, (x,y,ww,hh) in enumerate(boxes, start=1):
        crop = img.crop((x, y, x+ww, y+hh))
        out_name = f"{out_prefix}_part{i}.png"
        crop.save(out_name)
        saved.append(out_name)
    return saved

def manual_crop_mode(img_path, coords_list, out_prefix="out"):
    # coords_list: list of tuples (x,y,w,h)
    return crop_and_save(img_path, coords_list, out_prefix)

def main():
    if len(sys.argv) < 2:
        print("Usage: python split_two_images.py <image_path> [--manual x1 y1 w1 h1 x2 y2 w2 h2]")
        sys.exit(1)
    img_path = sys.argv[1]
    if not os.path.exists(img_path):
        print("File not found:", img_path)
        sys.exit(1)

    if "--manual" in sys.argv:
        # expect 8 numbers after --manual
        idx = sys.argv.index("--manual")
        try:
            nums = list(map(int, sys.argv[idx+1: idx+1+8]))
            coords = [(nums[0], nums[1], nums[2], nums[3]), (nums[4], nums[5], nums[6], nums[7])]
        except:
            print("Manual mode requires 8 integers: x1 y1 w1 h1 x2 y2 w2 h2")
            sys.exit(1)
        outs = manual_crop_mode(img_path, coords, out_prefix="manual")
        print("Saved (manual):", outs)
    else:
        boxes = find_largest_rects(img_path, max_rects=2, min_area_ratio=0.01)
        outs = crop_and_save(img_path, boxes, out_prefix="auto")
        print("Saved (auto):", outs)

if __name__ == "__main__":
    main()
