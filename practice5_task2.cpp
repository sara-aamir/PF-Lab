#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int start,end,num;
	printf("Starting Number : ");
	scanf("%d",&start);
	printf("Ending Number : ");
	scanf("%d",&end);
	if(start<=end)
		num=start;
	while(num<=end){
		printf(" %d ",num);
		num++;
	}
	return 0;
}
