#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char *argv[]) {
    // Important Values
    int length = strlen(argv[1]);
    char hy[1001];
    int i = 0;

    // -random
    srand(time(NULL));
    int random = rand() % 10;
    char *randomquotes[] = { "Welcome to HELL!", "Vi Vim NeoVim. Helix?",
        "Build a server and document Wikipedia!", "sh! bash is talking!",
        "Emacs is not slow!", "6. This is the sixth quote", "#include <stdbool.h> My ASS!",
        "why not 'void main()' ?", "Don't install go modules", "Welcome to the terminal!", };
    
    // Help Menu
    if (strcmp(argv[1], "-help") == 0) {
        printf("+----------+\n|  BoxMSG  |\n+----------+\n");
        printf("This is a help menu\nUsage: \nbox [ string/flag ]\nFlags:\n  -random\n  -help\n");
        exit(EXIT_FAILURE);
    }
    else if (strcmp(argv[1], "-random") == 0) {
        length = strlen(randomquotes[random]);
        while (true) {
            strcat(hy, "-");
            i += 1;
            if (i == length) {
                break;
            }
        }
        printf("+--%s--+\n|  %s  |\n+--%s--+\n", hy, randomquotes[random], hy);
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
