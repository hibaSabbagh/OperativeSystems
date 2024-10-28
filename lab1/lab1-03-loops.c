#include <stdio.h>


int main(){
	for(int i=0; i<=10; ++i){
		if (!i){
			printf("%d",i);
		}
		else {
			printf("/%d", i);
		}
	}
	printf("\n");

	for(int i=23; i>=7; --i ){
		if(i==23){
			printf("%d",i); 
		}
		else {
		printf("$%d", i); 
		}
	}
	printf("\n");

	for(int i = 0; i<123; ++i){
		if(!i){
			printf("%d",i);
		}
		else {
			if(i%7 == 0){
			printf(" %d",i); 
			}
		}
	}
	printf("\n");

	int even = 0; 
	while (even <= 12){
		if(!even){
			printf("%d", even);
		}
		else {
			if(even %2 == 0){
				printf(";%d",even);
			}
		
		}
		++even ; 	
	}
	printf("\n"); 
	int odd = 123; 
	while (odd<=123 && odd>= 111){
		if(odd %2==1){
		printf("%d ",odd);
		}
		--odd;
	}
	printf("\n"); 

	return 0;
} 




