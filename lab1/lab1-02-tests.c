#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	
	char name[100]= ""  ; 
        char age [10] = "";
	printf("Hello, please enter name and age\n"); 
	printf("Name:");
        scanf("%s",name); 
	printf("\nAge:"); 
	scanf("%s",age); 
	int ageInt = atoi(age);
       	char ageDescription [100] = "";  	
	switch (ageInt) {
		case  0 ... 12:  
			strcpy(ageDescription, "a child"); 
			break; 
		case 13 ... 19:
			strcpy(ageDescription, "a teenager");
			break;
		case 20 ... 30:
			strcpy(ageDescription, "an adult"); 
			break; 
		case 31 ... 60:
			strcpy(ageDescription, "experienced"); 
			break; 
		case 61 ... 100:
			strcpy(ageDescription, "wise");
			break; 
		defualt: 
			break; 
	}

	printf("\nHello, %s! Your are %s\n", name, ageDescription); 
		



	return 0; 
}


