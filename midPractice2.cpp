#include<stdio.h>
#include<math.h>

int main(){
	int s,r,n,exp;
	printf("s : ");
	scanf("%d",&s);
	printf("r : ");
	scanf("%d",&r);
	printf("n : ");
	scanf("%d",&n);
	
	exp=(s+pow(2+r,n))/(1-pow(r,n));
	printf("P : %d",exp);
	return 0;
}
