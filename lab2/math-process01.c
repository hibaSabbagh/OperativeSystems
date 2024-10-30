//math in one process 

#include <stdio.h>
#include <math.h>

#define ITERATIONS 1000000000

int main(){
	printf("It works! \n");
	
	double sum=0.0;
	double approxPI=3.141592653589793238462643383279; 
	double myPI=0.0;
	for(int i=1; i<ITERATIONS; ++i){
		sum+=(double)(1.0/pow((double)i,(double)2.0));
	}
	printf("The final sum is: %30f\n",sum);
	
	//compute my value for pi
	
	myPI=sqrt(sum*6) ;
	printf("My value for PI is: %.30lf\n",myPI);
	printf("True approx for PI: %.30lf\n",approxPI);
	return 0; 
}

