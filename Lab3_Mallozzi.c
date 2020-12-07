#include<stdio.h>

void prePrintSumArray(int numArr[], int size);
 
int main(){

	int size = 0;
	
	printf("Enter the size of array: ");
	scanf("%d", &size);
	if(size < 1){
		printf("Invalid array size");
	} else {
		int numArr[size];
		printf("The array is: ");
		for(int i = 0; i < size; i++){
			numArr[i] = i * 2;
			printf("%d ", numArr[i]);
		}
		printf("\n");
		prePrintSumArray(numArr, size);
	}


	return 0;
}

void prePrintSumArray(int numArr[], int size){
	
	int sum = 0;
	printf("The prefix sum of the array is: ");
	for(int i = 0; i < size; i++){
		sum += numArr[i];
		printf("%d ", sum);
	}
}
