#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	#define SIZE 20
	int x[SIZE],i;
	srand(time(0));
	for(i=0;i<SIZE;i++){
		x[i]=rand()%100;
		printf(" %d ",x[i]);
	}
	printf("\n");
	for(i=0 ; i<SIZE-1 && x[i]<=x[i+1] ; i++);
	if(i<SIZE-1)
		printf("Array is unsorted\n");
	else
		printf("Array is sorted");
	return 0;
}
