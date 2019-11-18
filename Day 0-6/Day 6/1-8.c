#include <stdio.h>

/* Exercise 1-8: Write a program to count blanks, tabs, and newlines.*/

main()
{
	int c, nb, nt, nl;
	nb = 0;  /* Number of blanks*/
	nt = 0;   /*Number of tabs*/
	nl = 0;   /*Number of newlines*/

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++nl;
	}
	printf("There are %d blanks, %d tabs, and %d newlines in that text.\n", nb, nt, nl);
}