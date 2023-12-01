#include<stdio.h>

int main(){
	int n,i,j,r,count=0;
	do{
		printf("N: ");
		scanf("%d",&n);
	}while(n<10);
	for(i=4;i<=n;i++){
		printf(" %d :",i);
		for(j=1;j<=i;j++){
			if(i%j==0){
				printf(" %d ",j);
				
			}
			count++;
				
			
		}
		printf("\n");
			
			
	}
	
}
