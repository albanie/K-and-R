// A program that prints each input word on a separate line

#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) 
    {
        if (c == ' ' || c == '\n') {
            printf("\n");
        } else {
            printf("%c", c);
        }
    }
}