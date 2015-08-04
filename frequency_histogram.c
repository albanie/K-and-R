#include <stdio.h>

/* Prints out a histogram of character frequencies */

#define SIZE_OF_ALPHABET 26 // only count lower case characters

int main()
{
    int c, counter;
    int char_counts[SIZE_OF_ALPHABET]; 

    counter = 0;

    for (int i = 0; i < SIZE_OF_ALPHABET; ++i) {
        char_counts[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z') {
            ++char_counts[c - 'a'];    
        }
    }

    printf("Histogram of character frequencies:\n");
    for (int i = 0; i < SIZE_OF_ALPHABET; ++i) {
        printf("frequency of character %c:", 'a' + i);
        for (int j = 0; j < char_counts[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }
}