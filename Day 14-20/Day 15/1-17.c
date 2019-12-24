#include <stdio.h>

/*Exercise 1-17: Write a program to print all input lines that are longer than 80 characters*/

#define MAXLINE 1000		/*maximum input line size*/
#define LONGLINE 80

int getline(char[], int maxline);
void copy(char from[], char to[]);

/*print lines longer than LONGLINE*/
main()
{
	int len;				/*Current line length*/
	char line[MAXLINE];		/*Current input line*/
	
	while ((len = getline(line, MAXLINE)) > 0)
		if (len > LONGLINE)
			printf("%s \n", line);
	
	return 0;
}
int getline(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
		if (i < lim - 2) {
			s[j] = c;  /*line still within boundaries*/
			++j;
		}
	if (c == '\n') {
		s[j] = c;
		++j;
		++i;
	}
	s[j] = '\0';
	return i;
}