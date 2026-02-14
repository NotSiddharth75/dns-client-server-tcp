// client.c - Forward + Reverse DNS Client (TCP)

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 5353

int main() {
    int sock;
    struct sockaddr_in server;
    char query[100], response[100];

    char server_ip[] = "127.0.0.1";

    printf("Enter domain or IP: ");
    scanf("%s", query);

    sock = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_family = AF_INET;
    server.sin_port = htons(PORT);
    inet_pton(AF_INET, server_ip, &server.sin_addr);

    connect(sock, (struct sockaddr*)&server, sizeof(server));

    write(sock, query, strlen(query));

    memset(response, 0, sizeof(response));
    read(sock, response, sizeof(response));

    printf("Result: %s\n", response);

    close(sock);
    return 0;
}
