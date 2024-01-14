#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int main(){
	int x[SIZE]={0,1,2,3,7,6,5,4,8,9};
	int element,distance;
	printf("Enter number to find how far it is from index: ");
	scanf("%d",&element);
	int found=0;
	for(int i=0;i<SIZE;i++){
		if(x[i]==element)
			{distance=abs(x[i]-i);
			printf("element %d Index:%d  distance %d",x[i],i,distance);
			found=1;
			break;
			}
	}


} 
