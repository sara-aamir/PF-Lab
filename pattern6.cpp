//1
//2 3
//6 5 4
//7 8 9 10
//15 14 13 12 11

#include<stdio.h>
int main(){
	int i,j,r,start,end;
	printf("Rows: ");
	scanf("%d",&r);
	printf("Starting num: ");
	scanf("%d",&start);
	for(i=1;i<=r;i++){
		if(i%2!=0){
			for(j=1;j<=i;j++){
				printf(" %d ",start);
				start++;
			}
		}
		else{
			end=start+i-1;
			for(j=1;j<=i;j++){
				printf(" %d ",end);
				end--;
				start++;
			}
		}	
			printf("\n");
	}
	return 0;
}
