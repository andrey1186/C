#include <stdio.h>

main() {
	printf("Temperature Conversion Table in Reverse\n\n");

	float fahr, celsius;
	int lower, upper, step;

	upper = 300;
	lower = 0;
	step = 20;

	fahr = upper;
	for (fahr; fahr >= lower;fahr-=step ) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t\t\t\t\t\t\t\t\t%6.1f\n",fahr,celsius );
	}
}