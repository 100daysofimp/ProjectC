/* K&R2: 1.9, Character Arrays, exercise 1.17

STATEMENT:
write a programme to print all the input lines
longer thans 80 characters.


*/


#include<stdio.h>

#define MAXLINE 1000
#define MAXLENGTH 81

int getline(char[], int max);
void copy(char from[], char to[]);

int main()
{
    int len = 0; /* current line length */
    char line[MAXLINE]; /* current input line */

    while ((len = getline(line, MAXLINE)) > 0)
    {
        if (len > MAXLENGTH)
            printf("LINE-CONTENTS:  %s\n", line);
    }

    return 0;
}



int getline(char line[], int max)
{
    int i = 0;
    int c = 0;

    for (i = 0; ((c = getchar()) != EOF) && c != '\n' && i
        < max - 1; ++i)
        line[i] = c;

    if (c == '\n')
        line[i++] = c;

    line[i] = '\0';

    return i;
}