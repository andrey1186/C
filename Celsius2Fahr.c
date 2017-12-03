#include <stdio.h>

int main () {

	float fahr, celsius;
	int lower, upper, step;

	lower =0; // lower limit of temperature table
	upper = 40; // upper limit
	step = 1; // step size

	celsius = lower;
	printf("Celsius to Fahrenheit Conversion Table\n\n" );
	while (celsius <= upper) {
		fahr =  (9.0/5.0)*celsius + 32;
		printf("%3.0f\t\t\t\t\t\t\t\t\t%6.1f\n",celsius, fahr );
		celsius += step;
	}

	return 0; 
}