import http.server
import socketserver
import json
import datetime
import os

PORT = 12345

class Handler(http.server.SimpleHTTPRequestHandler):
    def do_POST(self):
        content_length = int(self.headers['Content-Length'])
        post_data = self.rfile.read(content_length)
        data = json.loads(post_data.decode('utf-8'))

        problem_name = data['name']
        url = data['url']
        time = datetime.datetime.now().strftime("%Y-%m-%d %H:%M")
        filename = problem_name.replace(" ", "_").replace(".", "") + ".cpp"

        header = f"""// Author: Mahfuz Uddin
// Problem: {problem_name}
// URL: {url}
// Date: {time}
// Language: C++

"""

        with open(filename, "w") as f:
            f.write(header)

        os.system(f"code {filename}")

        self.send_response(200)
        self.end_headers()

with socketserver.TCPServer(("", PORT), Handler) as httpd:
    print(f"Listening on port {PORT}...")
    httpd.serve_forever()
