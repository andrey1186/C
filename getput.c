#include <stdio.h>

int main () {
	
	char c;

	while ((c = getchar())!=EOF) {
		
		printf("%d\n",getchar()!=EOF);
		putchar(c);
		putchar('\n');
		printf("%d\n",EOF);

	}

	return 0;
}