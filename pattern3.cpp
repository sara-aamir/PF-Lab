//1234554321
//1234  4321
//123    321
//12      21
//1        1
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Rows: ");
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		for(j=1;j<=i;j++)
			printf("%d",j);
		for(int j=i;j<n;j++)
			printf(" ");
		for(int j=i;j<n;j++)
			printf(" ");
		for(int j=i;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
	return 0;
}
