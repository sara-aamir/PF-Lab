#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int n;
	printf("Enter value from 0 to 10 = ");
	scanf("%d",&n);
	while(n>=1 && n<=10){
		printf("Enter value from 0 to 10 = ");
		scanf("%d",&n);
	}
	return 0;
}
