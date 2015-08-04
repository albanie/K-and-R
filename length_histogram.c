#include <stdio.h>

/* Prints out a histogram of word lengths */

#define MAX_WORD_LENGTH 15 // assume 15 is maximum word length

int main()
{
    int c, counter;
    int word_lengths[MAX_WORD_LENGTH]; 

    counter = 0;

    for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
        word_lengths[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n') {
            if (counter != 0) {
                ++word_lengths[counter];    
            }
            counter = 0;
        } else {
            ++counter;
        }
    }

    printf("Histogram of word lengths:\n");
    for (int i = 1; i < MAX_WORD_LENGTH; ++i) {
        printf("words of length %d:", i);
        for (int j = 0; j < word_lengths[i]; ++j) {
            printf("-");
        }
        printf("\n");
    }
}