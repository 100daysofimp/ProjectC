#include <stdio.h>

/*Today we are converting Celcius to Freedom Units
	for fahr = 0, 20, ..., 300; floating point version*/

main()

{
	printf("Communist Freedom\n");
	{ float fahr, celcius;
	int lower, upper, step;
	lower = -50; /*This is the lower bound of the table*/
	upper = 200; /*This is the upper bound of the table*/
	step = 20; /*This is the step size*/

	celcius = lower;
	while (celcius <= upper){
		fahr = celcius * (9.0 / 5.0) + 32;
		printf("%3.0f %6.1f\n", celcius, fahr);
		celcius = celcius + step;
	}
	
}
}