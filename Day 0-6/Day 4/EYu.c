#include <stdio.h>

/*I copied this code from Evan Yu (https://github.com/ccpalettes). Thanks Evan!*/
int main()
{
	printf("Please enter a character:\n");
	printf("The expression \"getchar() != EOF\" is %d.\n", getchar() != EOF);
	return 0;
}