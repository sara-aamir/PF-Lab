#include<stdio.h>
#include<stdlib.h>

#define SIZE 10

int main(){
	int a1[SIZE]={0,2,1,3,4,7,6,5,8,9};
	int a2[SIZE]={3,4,5,7,8,9,1,2,3,12};
	int temp;
	for(int i=0;i<SIZE;i++){
		for(int j=i;j<SIZE-1;j++){
			if(a1[j]>a1[j+1]){
				temp=a1[j];
				a1[j]=a1[j+1];
				a1[j+1]=temp;
			
				temp=a2[j];
				a2[j]=a2[j+1];
				a2[j+1]=temp;
		}
		}
		
	}
	for(int j=0;j<SIZE;j++)
		printf(" %d",a1[j]);
	printf("\n");
	for(int j=0;j<SIZE;j++)	
		printf(" %d ",a2[j]);
		
	
}
