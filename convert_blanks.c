#include <stdio.h>

int main() 
{
    int c;
    int is_first_space = 1;

    while ((c = getchar()) != EOF) 
    {

        if (c == ' ') {
            if (is_first_space == 1) {
                printf(" ");  
                is_first_space = 0;  
            } else {
                ; // Do nothing
            }
        }
        else {
            printf("%c", c);
            is_first_space = 1;
        }
    }
}