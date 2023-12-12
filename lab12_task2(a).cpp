#include<stdio.h>

void isPrime(const int n){
	int i,count=0;
	for(i=1;i<=n;i++){
			if(n%i==0)
				count++;
	}
	if(count==2)
		printf("1");
	else
		printf("0");
}
int main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	isPrime(n);
	return 0;
}
