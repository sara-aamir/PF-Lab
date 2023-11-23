//Write code to input rows print numbers in the pattern:
//Rows: 4
//1 2 3 4 5
//2 3 4 5 6
//3 4 5 6 7
//4 5 6 7 8
#include<stdio.h>

int main(){
	int i,j,row,startValue;
	printf("Row:" );
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		startValue=i;
		for(j=1;j<=5;j++){
			printf(" %d ",startValue);
				startValue++;
		}
		printf("\n");
	}
}
