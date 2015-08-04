#include <stdio.h>

main()
{
    int c;

    printf("EOF value is: %d", EOF);
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}