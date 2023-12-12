#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
	srand(time(0));
	#define ELEMENTS 10
	int x[ELEMENTS],sum=0,posCount=0,negCount=0;
	float avg;
	for(int i=0 ; i<ELEMENTS ; i++){
		x[i]=rand()%10;
		printf(" %d ",x[i]);
		sum=sum+x[i];
	}
	avg=(float)sum/ELEMENTS;
	printf("\n");
	printf("Average: %f ",avg);
	for(int i=0 ; i<ELEMENTS ; i++){
		printf("\n");
		printf(" %f ",avg-x[i]);
		if(avg-x[i]<0)
			posCount++;
		else
			negCount++;
	}
	printf("\nCount of positive numbers: %d ",posCount);
	printf("\nCount of negative numbers: %d ",negCount);
	return 0;
}
