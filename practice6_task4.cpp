#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	srand(time(0));
	int i,n,even_sum=0,odd_sum=0;
	for(i=1; i<=10; i++){
		n=rand();
		printf("Number: %d\n",n);
		if(n%2==0)
			even_sum=even_sum+n;
		else
			odd_sum=odd_sum+n;
	}
	printf("Sum of even numbers: %d \n",even_sum);
	printf("Sum of odd numbers: %d",odd_sum);         
	return 0;
}
