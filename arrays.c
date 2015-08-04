#include <stdio.h>

/* count digits, white space and others */
int main() 
{
    int c, i, num_white, num_other;
    int num_digit[10];

    num_white = num_other = 0;
    for (i = 0; i < 10; ++i) {
        num_digit[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9') {
            ++num_digit[c - '0'];
        } else if (c == ' ' || c == '\n' || c == '\t') {
            ++num_white;
        } else {
            ++num_other;
        }
    }

    printf("digits = ");
    for (i = 0; i < 10; ++i) {
        printf(" %d", num_digit[i]);
    }
    printf(", white space = %d, other = %d\n", num_white, num_other);
}