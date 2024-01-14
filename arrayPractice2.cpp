#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	int x[10]={12,29,39,67,12,33,34,78,19,23};
	printf("Enter index number: ");
	scanf("%d",&n);
	if(n<=10)
		printf("%d",x[n]);
	else
		printf("-999999");
}
