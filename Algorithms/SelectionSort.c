// Selection Sort algorithm for sorting an array of integers in C
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int[], int);

void selectionSort(int array[], int length) {
	int minimum_element = array[0];
	int location_min_el = 0;
	for (int i = 1; i < length; i++) {
		if (array[i] < minimum_element) {
			minimum_element = array[i];
			location_min_el = i;
		}
	}
	int temp = array[0];
	array[0] = minimum_element;
	array[location_min_el] = temp;
	while (length > 0){
		length--;
		selectionSort(array+1, length);
	}
}


void main(int argc, char** argv) {
	int array[argc];
	
	for (int k = 1; k < argc; k++){
		array[k-1] = atoi(argv[k]);
	}
	
	int length = sizeof(array)/sizeof(array[0]);
	selectionSort(array, length);
	
	for (int i=0; i < length; i++) {
		printf("\n	%d ", array[i]);
	}
	
	printf("\n");
}