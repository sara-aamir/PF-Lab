#include<stdio.h>
#include<math.h>

int main(){
	int x,exp;
	printf("Value of X : ");
	scanf("%d",&x);
	
	exp=(3*pow(x,3)-5*pow(x,2))/(2*x);
	
	printf("3(x^3)-5(x^2)/(2x): %d",exp);
	return 0;
}
