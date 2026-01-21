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
/*	swap(&x, &y);
	printf("x: %d, y: %d \n", x, y);

	sort(values);
	printf("After: \n"); */
	printValues(values);

	return(0);
} // end main


void printValues (int* values){
	for (int i = 0; i<10; i++) {
		printf("%d ", values[i]);
	}
	printf(" \n");
	return;
} //end printValues

//Before: 
//7 3 9 4 6 1 2 8 5 32766  
//x: 3, y: 5 
//7 3 9 4 6 1 2 8 5 32766  
//WHAT THE CODE IS MAKING CURRENTLY
