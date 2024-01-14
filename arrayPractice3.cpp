#include<stdio.h>
#include<stdlib.h>

int main(){
	int sum=0;
	int x[10]={12,29,39,67,12,33,34,78,19,23};
	for(int i=0;i<10;i++){
		sum=sum+x[i];
	}
	printf("Sum: %d ",sum);
	return 0;
}
