#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct{
	int id;
	char name[100];
	int number;
}Contact;

void printContact(Contact contact);

FILE *file;
  
int main(){

	Contact c1 = {12, "Justin Bieber", 567892233};
	Contact c2 = {23, "Ryan Gosling", 683579922};
	Contact c3 = {34, "Donna Strickland", 574687755};
	
	printContact(c1);
	printContact(c2);
	printContact(c3);
	
	file = fopen("contacts.txt", "a");
	if(file == NULL){
		printf("Cannot Create or Open File");
		exit(1);
	}
	fprintf(file, "%d\n", c1.id);
	fprintf(file, "%s\n", c1.name);
	fprintf(file, "%d\n", c1.number);
	fprintf(file, "%d\n", c2.id);
	fprintf(file, "%s\n", c2.name);
	fprintf(file, "%d\n", c2.number);
	fprintf(file, "%d\n", c3.id);
	fprintf(file, "%s\n", c3.name);
	fprintf(file, "%d\n", c3.number);
	
	fclose(file);
	return 0;
}

void printContact(Contact contact){
	
	printf("ID: %d\n", contact.id);
	printf("Name: %s\n", contact.name);
	printf("Number: %d\n", contact.number); 
	
}
