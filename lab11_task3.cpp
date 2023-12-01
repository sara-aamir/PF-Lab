#include<stdio.h>

int main(){
	int n,i,j,k,l;
	printf("N: ");
	scanf("%d",&n);
	printf("K: ");
	scanf("%d",&k);
	for(i=1;i<=n;i++){
		printf("{ (");
		for(l=1;l==1;l++)
		printf("%d),",l);
		printf("(");
		for(j=1;j<=k-1;j++)
			printf("%d,",j);
			printf("\b");
			printf(")");
			printf(",(");	
		for(j=1;j<=k;j++){
				printf("%d,",j);
		}
			printf("\b");
			printf(")}");
			printf("\n");
			
			
	}
	return 0;
}
