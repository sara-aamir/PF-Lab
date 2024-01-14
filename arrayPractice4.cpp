#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(){
	int x[SIZE]={12,29,39,67,12,33,34,78,19,23};
	int sum=0;
	float avg;
	for(int i=0;i<SIZE;i++){
		sum=sum+x[i];
	}
	avg=(float)sum/SIZE;
	printf("Sum: %d\n",sum);
	printf("Average: %f\n",avg);
	for(int i=0;i<SIZE;i++){
		if(x[i]>avg)
			printf("%d ",x[i]);
	}
	printf("are larger than average");
}
