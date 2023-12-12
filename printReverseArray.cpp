#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void printStraight(int x[],int SIZE){
	printf("Array :\n[");
	for(int i=0;i<SIZE;i++)
		printf("%d, ",x[i]);
	printf("]");
}

void printReverse(int x[],int SIZE){
	printf("Reverse Array : \n[");
	for(int i=SIZE-1;i>=0;i--)
		printf("%d, ",x[i]);
	printf("]");	
}

int main(){
	const int SIZE=5;
	int array[SIZE]={4,3,2,6,8};
	printStraight(array,SIZE);
	printf("\n");
	printf("----------------");
	printf("\n");
	printReverse(array,SIZE);
	return 0;
}
