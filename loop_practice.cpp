#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
int main(){
	int n1,n2;
	int middleNumber;
	printf("first number : ");
	scanf("%d",&n1);
	printf("second number : ");
	scanf("%d",&n2);
	
	if(n1<n2)
	
	middleNumber=n1+1;
	while(middleNumber<n2){
		if(middleNumber%2==0)
		printf(" %d ",middleNumber);
		middleNumber++;
	}
	return 0;
}
