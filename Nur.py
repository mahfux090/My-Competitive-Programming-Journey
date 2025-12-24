#No 1

m = int(input("Enter marks: "))

if m >= 80 and m <= 100:
    print("Grade: A+")
    print("Point: 5.00")
elif m >= 70:
    print("Grade: A")
    print("Point: 4.00")
elif m >= 60:
    print("Grade: A-")
    print("Point: 3.50")
elif m >= 50:
    print("Grade: B")
    print("Point: 3.00")
elif m >= 40:
    print("Grade: C")
    print("Point: 2.00")
elif m >= 33:
    print("Grade: D")
    print("Point: 1.00")
elif m >= 0:
    print("Grade: F")
    print("Point: 0.00")
else:
    print("Invalid Marks")

#No 2

import math

a = float(input("Enter a: "))
b = float(input("Enter b: "))
c = float(input("Enter c: "))

d = b*b - 4*a*c

if d > 0:
    x1 = (-b + math.sqrt(d)) / (2*a)
    x2 = (-b - math.sqrt(d)) / (2*a)
    print("Root 1:", x1)
    print("Root 2:", x2)
elif d == 0:
    x = -b / (2*a)
    print("Root:", x)
else:
    print("No real roots")



#No 3
n = int(input("Enter n: "))

print("Even numbers:")
for i in range(1, n+1):
    if i % 2 == 0:
        print(i)

print("Odd numbers:")
for i in range(1, n+1):
    if i % 2 != 0:
        print(i)

#no 4

n = int(input("Enter n: "))

for i in range(2, n+1):
    c = 0
    for j in range(1, i+1):
        if i % j == 0:
            c += 1
    if c == 2:
        print(i)

#no 5
n = int(input("Enter N: "))

a = 0
b = 1

for i in range(n):
    print(a)
    c = a + b
    a = b
    b = c




#######

