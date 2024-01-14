#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(){
	int x[SIZE]={12,29,39,67,12,33,34,78,19,23};
	for(int i=0;i<SIZE;i++){
		printf(" %d ",x[i]);
			if(x[i]>x[i+1]){
				printf(" \n %d",x[i]);
			}	
	}
	return 0;
}
