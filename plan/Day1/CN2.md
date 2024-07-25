# CN2. What happens from the input of a URL to the display of a webpage  


## Tutorials  

[What happens when you type a URL in the web browser and press Enter? Computer Stuff #18 (video)](https://www.youtube.com/watch?v=vvpCnjyjTuU)  


## Solution  

1. **URL (Uniform Resource Locator) Input and Parsing:**
    1.1 The user enters a URL in the browser's address bar.
    1.2 Upon entering the URL, the browser parses it to extract information such as protocol, host, port, and path, and constructs an HTTP request.
    1.3 The browser checks its **HTTP cache** based on request headers and decides whether to fetch resources from the server or use cached resources.
2. **DNS Resolution:** The browser uses DNS (Domain Name System) to resolve the domain name into an IP address, determining the server's location to connect to.
3. **Establishing a Connection:** Using the resolved IP address, the browser establishes a network connection with the server. This typically involves a **three-way handshake using the TCP protocol**.
4. **Sending the Request:** The browser sends an **HTTP/HTTPS request** to the web server, requesting the webpage content. The request includes the path to access, the method (GET, POST, etc.), and header information.
5. **Server Processing:** Upon receiving the request, the server passes it to a request handler. Based on the request content and path, the server processes the HTTP request and generates an HTTP response. The server may retrieve data from a database, generate dynamic content, and then send the response back to the browser.
6. **Receiving the Response:** The browser receives the server's response, which typically includes the requested webpage, **status code**, compression type, caching instructions, and any set cookies.
7. **Browser Page Loading:**
    7.1 **Parsing and Rendering:** The browser parses the response content, constructing the Document Object Model (DOM) and render tree. It parses HTML, CSS, and JavaScript, determining the page's structure, style, and behavior.
    7.2 **Page Rendering:** Using the render tree and style information, the browser paints the page content onto the screen. This includes layout, drawing, and displaying page elements.
    7.3 **JavaScript Execution:** If the page contains JavaScript, the browser executes the JavaScript code, adding interactivity and dynamic behavior.
    7.4 **Resource Loading:** The page may include external resources such as images, stylesheets, and script files. The browser downloads these resources as needed to fully render the page.
    7.5 **Page Load Completion:** Once all content and resources are loaded, the browser displays the complete webpage.
8. **Closing the Connection:** A **four-way handshake using the TCP protocol** closes the connection. 
