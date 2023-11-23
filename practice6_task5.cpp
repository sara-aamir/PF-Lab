#include<stdio.h>
 
int main(){
	int n=1;
	while(n<=100){
		printf(" %d ",n);
		n++;
		if(n%5==1)
			printf("\n");
	}
	return 0;
}
