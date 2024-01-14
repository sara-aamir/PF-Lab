#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
int main(){
	int x[SIZE],y[SIZE],temp;
	printf("First array: ");
	for(int i=0;i<SIZE;i++){
		scanf("%d",&x[i]);
	}
	
	printf("\nSecond array: ");
	for(int i=0;i<SIZE;i++){
		scanf("%d",&y[i]);
	}
	for(int i=0;i<SIZE;i++){
		if(x[i]<y[i])
			printf("first is smaller\n");
		else if(x[i]>y[i])
			printf("second is smaller\n");
	}
}
