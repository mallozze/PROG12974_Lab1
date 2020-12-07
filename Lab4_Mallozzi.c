#include<stdio.h>
#include<string.h> 
#include<ctype.h>
#include<stdlib.h>

int main(){

	char message[99];
	
	printf("Enter a line of text below: \n");
	fgets(message, 99, stdin);
	
	int spCount = 0;
	
	for(int i = 0; i < (int)(strlen(message))-1; i++){
		if(isalpha(message[i])!=0){
			if(message[i] < 97){
				message[i] += 32;
			}else{
				message[i] -= 32;
			}
		} else if (isdigit(message[i]) != 0){
			//does nothing
		} else {
			spCount++;
		}
	} 
	
	puts(message);
	printf("Number of special characters: %d", spCount);

	return 0;
}
