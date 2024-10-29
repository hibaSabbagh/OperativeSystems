#include <stdio.h>
#include <time.h>
#include <string.h>

void printDateToday(){
	time_t t = time (NULL); 
	struct tm tm = *localtime(&t); 
	printf( "\n%s", ctime(&t)); 	
}
void printHiNameAge(char age[3], char name[5]){
	printf("Hi %s you are %s.\n", name, age);	
}



