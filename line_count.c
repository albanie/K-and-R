#include <stdio.h>

int main()
{
    int c;
    int num_lines, num_tabs, num_blanks;

    num_tabs = 0;
    num_lines = 0;
    num_blanks = 0;
    
    while ((c = getchar()) != EOF)
    {
        if (c == '\t') {
            ++num_tabs;
            printf("Number of tabs: %d\n", num_tabs);
        }
        if (c == ' ')
        {
            ++num_blanks;
            printf("Number of blanks: %d\n", num_blanks);
        }
        if (c == '\n') {
            ++num_lines;
            printf("Number of lines: %d\n", num_lines);    
        }
    }
}