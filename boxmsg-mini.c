 /*
  Copyright: Roky Edward Iven Henderson :: Code refactored by no-one ));
                             < [ --- ] >
  end ));
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int length = strlen(argv[1]);
    char hy[1001];
    int i = 0;
    while (1) {
        strcat(hy, "-");
        i += 1;
        if (i == length) {
            break;
        }
    }
    printf("+--%s--+\n|  %s  |\n+--%s--+\n", hy, argv[1], hy);
    return EXIT_SUCCESS;
}
