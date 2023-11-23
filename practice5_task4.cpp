#include <stdio.h>

int main(){
	int num,i,max;
	for(i=1;i<=5;i++){
		printf("Enter Number : ");
		scanf("%d",&num);
		if(num>max)
			max=num;
	}
	printf("Maximum Number: %d ",max);
	return 0;
}
