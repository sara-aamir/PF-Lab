#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
	int i=2,j=1;
	printf("Even numbers: ");
	while(i<=50){
		printf(" %d ",i);
		i=i+2;
	}
	printf("\n");
	printf("Odd numbers : ");
	while(j<=49){
		printf(" %d ",j);
		j=j+2;
	}
	return 0;
}
