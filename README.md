 DNS Client-Server Implementation using TCP (C Programming)

 Project Overview
This project implements a simple DNS Server using TCP socket programming in C.
It supports:

- Forward DNS Lookup (Domain → IP Address)
- Reverse DNS Lookup (IP Address → Domain)

The project follows a client-server architecture where:
- The server maintains predefined DNS records.
- The client sends a query (domain/IP).
- The server processes the request and returns the result.

---

Technologies Used
- C Programming
- TCP Socket Programming
- Linux Networking
- GCC Compiler

---

 Files
- `server.c` → DNS Server implementation
- `client.c` → DNS Client implementation

---

How to Run

### Step 1: Compile
```bash
gcc server.c -o server
gcc client.c -o client
