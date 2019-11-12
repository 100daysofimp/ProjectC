#include <stdio.h>

/*Today we are converting Celcius to Freedom Units
	for fahr = 0, 20, ..., 300; floating point version*/

main()

{
	printf("Celcius Freedom\n");
	{ float fahr, celcius;
	int lower, upper, step;
	lower = 0; /*This is the lower bound of the table*/
	upper = 300; /*This is the upper bound of the table*/
	step = 20; /*This is the step size*/

	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
	}
}