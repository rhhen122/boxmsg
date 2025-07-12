#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    // Important Values
    int length = strlen(argv[1]);
    char hy[1001];
    int i = 0;
    // Error Handling
    if (strcmp(argv[1], "help") == 0) {
        printf("This is a help menu\n Usage: \n boxmsg [ string ]\n");
        exit(EXIT_FAILURE);
    }
    else {
        while (true) {
            strcat(hy, "-");
            i += 1;
            if (i == length) {
                break;
            }
        }
        printf("+--%s--+\n|  %s  |\n+--%s--+\n", hy, argv[1], hy);
    }
    return EXIT_SUCCESS;
}
