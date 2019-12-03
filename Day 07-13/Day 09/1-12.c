#include <stdio.h>
/*Exercise 1-12: Write a program that prints its input one word per line*/

#define IN 1 /*Inside a word*/
#define OUT 0 /*Outside a word*/

/*Print input one word per line*/

main()
{
	int c, state;

	state = OUT;
		while ((c = getchar()) != EOF) {
			if (c == ' ' || c == '\n' || c == '\t'){
				if (state == IN) {
					putchar('\n');	/*Finish the word*/
					state = OUT;
			}
		}		else if (state == OUT) {
					state = IN; /*beginning of word*/
					putchar(c);
		}		else
					putchar(c);
	
	}
}