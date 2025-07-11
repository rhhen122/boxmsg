#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (strcmp(argv[1], "help") == 0) {
        printf("This is a help menu\n Usage: \n boxmsg [ string ]\n");
    }
    else {
        int length = strlen(argv[1]);
        if (length > 51) {
            printf("Error %s %s", argv[0], "String is over 50 char");
            exit(EXIT_FAILURE);
            }
        else {
            char hy[51];
            int i = 0;
            while (1) {
                strcat(hy, "-");
                i += 1;
                if (i == length) {
                    break;
                }
            }
            printf("+--%s--+\n|  %s  |\n+--%s--+\n", hy, argv[1], hy);
        }
    }
    return EXIT_SUCCESS;
}
