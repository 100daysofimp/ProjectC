#include <stdio.h>

/* Exercise 1-10: Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b, and each backslash by \\*/

main()
{
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\b");
		if (c == '\\')
			printf("\\\\");
		if (c != '\t')
			if (c != '\b')
				if (c != '\\')
					putchar(c);
	}
}