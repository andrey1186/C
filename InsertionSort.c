// Insertion sort algorithm for sorting an array of integers in C
#include <stdio.h>
#include <stdlib.h>

int* insertionSort(int array[], int arraylen);

int* insertionSort (int array[], int arraylen) {

	for (int i = 0; i < arraylen; i++){
		int index = i;
		while (array[index] < array[index-1] && index > 0) {
			int temp = array[index -1];
			array[index -1] = array[index];
			array[index] = temp;
			index--; 
		}
	}
	return array;
}

int main(int argc, char** argv) {
	
	int array[argc];
	for (int k = 1; k < argc; k++){
		array[k-1] = atoi(argv[k]);
	}
	int arraylen = sizeof(array)/sizeof(array[0]);
	insertionSort(array, arraylen);
	for (int i=1; i < argc; i++) {
		fprintf(stderr, " %d\n", array[i]);
	}
	return 0;
}