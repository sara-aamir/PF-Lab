#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
	srand(time(0));
	int row,col,i,j,element1,element2;
	printf("Rows : ");
	scanf("%d",&row);
	printf("Columns : ");
	scanf("%d",&col);
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
		element1=rand()%9+1;
		element2=rand()%9+1;
		printf(" %d%d ",element1,element2);	
		}		
	printf("\n");
	}
	return 0;
	
}
