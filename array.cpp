#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(){
	int x[SIZE]={12,29,39,67,12,33,34,78,19,23};
	for(int i=0;i<SIZE;i++){
		printf("%d %d \n",x[i],x[i+1]);
		x[i]=x[i+1];
	}
	return 0;
}
