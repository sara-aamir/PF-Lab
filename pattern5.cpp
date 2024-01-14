//    5
//   4 
//  3   
// 2     
//1       

#include<stdio.h>

int main(){
	int i,j,n;
	printf("Rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++)
			printf(" ");
		printf("%d\n",i);
			}		
	return 0;
}
