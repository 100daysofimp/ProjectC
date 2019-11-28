#include <stdio.h>

#define NONBLANK 'a'

/*Exercise 1-9: Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank*/

main()
{
	int c, lastc;

	lastc = NONBLANK;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')
				putchar(c);

		lastc = c;
	}
}