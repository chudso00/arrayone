#include <stdio.h>

//pre-process code = placeholder for something to be changed
//doesn't allocate space
//text replacement space
#define SIZE 5

int main(){
	int array[SIZE]; //allocates a block of 5 integers
	int index;

	for(index=0; index < SIZE; index++){
		scanf("%d", &array[index]); 
	}

	for(index=0; index < SIZE; index++){
		printf("%d ", array[index]); 
	}
	printf("\n");
}
