#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	#define SIZE 20
	int x[SIZE],i,temp;
	srand(time(0));
	for(i=0;i<SIZE;i++){
		x[i]=rand()%100;
		printf(" %d ",x[i]);
	}
	printf("\n");
	for(i=0 ; i<SIZE-1 ;i++){
		if(x[i]>x[i+1])
			temp=x[i];
			x[i]=x[i+1];
			x[i+1]=temp;
	}
	for(i=0 ; i<SIZE ; i++)
		printf(" %d ",x[i]);
	printf("\n");
	return 0;
}
