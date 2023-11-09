#include<stdio.h>

int main(){
	int n=1;
	while(n<=100){
		if(n%4==0 && n%6!=0 ||n%4!=0 && n%6==0)
			printf(" %d ",n);
	n++;
	}
	return 0;
}
