#include <stdio.h>

/*Exercise 1-19: Write a function reverse(s) that reverses the character string s.
Use it to write a program that reverses its input a line at a time*/

#define MAXLINE 1000 /*maximum input line size*/
void reverse(char s[]);

/*reverse input lines, a line at a time*/
main()
{
	char line[MAXLINE];	/*current input line*/

	while (getline(line, MAXLINE) > 0) {
		reverse(line);
		printf("%s", line);
	}
}
/*reverse: reverse string s*/

void reverse(char s [])
{
	int i, j;
	char temp;

	i = 0;
	while (s[i] != '\0') /* find the end of the string s*/
		++i;
	--i;				/*back off from '\0'*/
	if (s[i] == '\n')
		--i;
	j = 0;

	while (j < i) {
		temp = s[j];
		s[j] = s[i];	/*swap the characters*/
		s[i] = temp;
		--i;
		++j;
	}

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