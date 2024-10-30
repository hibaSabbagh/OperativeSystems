#include <stdio.h> 
#include <sys/types.h> 	 /*for the pid_t datatype*/
#include <unistd.h>	 /*for the fork() function*/ 
#include <stdlib.h> 	 /*for the exit() function*/

int main(){
	pid_t pid; /* create a new process id variable pid*/ 
	
	printf("It works!\n");

	pid=fork(); /*try to create a new process*/
	if(pid==-1){ /*something went wrong*/
		printf("Error creating a new process... BAD! \n");
		exit(-1);
	} else if (pid==0){ /*the child recive 0 as pid value*/
		printf("CHILD \n"); 
	}else{ /*the parent receives the pid of the child as value*/
		printf("PARENT \n");
	}
	
	printf("The End. \n");
	return 0; 
}



