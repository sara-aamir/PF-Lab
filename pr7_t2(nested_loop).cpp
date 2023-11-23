#include<stdio.h>

int main(){
	int i,j,row,col;
	char ch='*';
	printf("Rows : ");
	scanf("%d",&row);
	printf("Column : ");
	scanf("%d",&col);
	for(i=1;i<=row;i++){
			for(j=1;j<=col;j++)
				printf(" %c ",ch);
		printf("\n");
	}
	return 0;
}
