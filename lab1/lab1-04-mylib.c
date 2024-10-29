#include <stdio.h>
#include <time.h>
#include <string.h>

void printDateToday(){
	time_t t = time (NULL); 
	struct tm tm = *localtime(&t); 
	printf( "\n%s", ctime(&t)); 	
}
void printHiNameAge(char* name, int age){
	printf("Hi %s you are %d.\n", name, age);	
}



