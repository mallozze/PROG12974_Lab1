#include<stdio.h>

#include<stdlib.h>

#include<time.h>

int getRandom(int min, int max);

int getSummation(int num);

void printFactors(int num);
 
int main(){

	int min, max;
	
	printf("Enter min and max: ");
	scanf("%d %d", &min, &max);
	
	if(min >= max || min < 0){
		printf("Invalid numbers");
	} else {
		int num = getRandom(min, max);
		printf("Random Number = %d\n", num);
		printf("Summation = %d\n", getSummation(num));
		printFactors(num);
	}

	return 0;
}


int getRandom(int min, int max){	
	srand(time(NULL));
	int num = (rand() % (max - min)) + min;
	return num;
}

int getSummation(int num){
	int i = 0, sum = 0;
	for(i; i <= num; i++){
		sum += i;
	} 
	return sum;
}

void printFactors(int num){
	printf("Factors = ");
	int i = 1;
	for(i; i <= num; i++){
		if(num % i == 0){
			printf("%d ", i);
		}
	}
}
