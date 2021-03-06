#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 0
#define ERROR 1

#define END_LINE 0x0
#define SERVER_PORT 1500
#define MAX_MSG 100

int read_line (int newSd, char *line_to_return);
int send_line(int nb_data, char const *data[], int sd);
int ask_fic(int sd, const char *nom_fic);
int lecture_fic(int sd);
