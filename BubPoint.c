#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
	printf("Before: \n");
	printValues(values);

	// test swap
	int x = 3;
	int y = 5;
	printf("x: %d, y: %d \n", x, y);
	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n"); 
	printValues(values);

	return(0);
} // end main


void printValues(int* values){
	printf("[");
	for (int i = 0; i<9; i++) {
		printf("%d ", values[i]);
	}
	printf("]\n");
//	return;
} //end printValues function


void swap(int* x, int* y){
	int tempHolder = *x;
	*x = *y;
	*y = tempHolder;

//	return(&x, &y);
} //end swap function

void sort(int* values){
	int i = '\0';
	int j = '\0';
	for (int i = 0; i<8; i++) {
		for (int j =0; j<8; j++) {
			if (values[j] > values[j+1]) {
				swap(&values[j], &values[j+1]);
				printValues(values);
			} //end if value
		} //end for j loop
	} //end for i loop
//	return(values);
} //end sort function




