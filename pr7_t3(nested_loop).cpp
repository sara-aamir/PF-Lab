#include<stdio.h>

int main(){
	int i,j,row;
	char ch='A';
	printf("Rows : ");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
			j=1;
			while(j<=26){
				printf("%c",ch);
			ch++;
			j++;
			}	
		ch='A';
		printf("\n");
	}
	return 0;
}
