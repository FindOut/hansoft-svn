from BaseHTTPServer import BaseHTTPRequestHandler
from BaseHTTPServer import HTTPServer


class PostHandler(BaseHTTPRequestHandler):

    def do_HEAD(self):
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()

    def do_POST(self):
        self.send_response(200)
        self.end_headers()


class HansoftServer:

    def __init__(self):
        self.server = HTTPServer(('localhost', 9006), PostHandler)

    def start(self):
        self.server.serve_forever()

    def stop(self):
        self.server.server_close()


def main():
    print "Staring server press ctrl + C to stop"
    s = HansoftServer()
    try:
        s.start()
    except KeyboardInterrupt:
        s.stop()
        exit(0)

# Initialise main method
if __name__ == '__main__':
    main()