/*  Exercise 1..8. Write a program to count blanks, tabs, and newline */

#include <stdio.h>

int main() {
	
	char c;
	int count_t_b_n = 0;

	while ((c=getchar())!=EOF) {
		if (c == '\t' || c == ' ' || c == '\n')
			count_t_b_n ++;
	}

	printf("%d\n", count_t_b_n);

	return 0;
}