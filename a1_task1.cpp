#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int a,b,c,disc,root1,root2;
	printf("A : ");
	scanf("%d",&a);	
	printf("B : ");
	scanf("%d",&b);	
	printf("C : ");
	scanf("%d",&c);
	
	disc=(b*b)-(4*a*c);
	
	if(a==0)	printf("Equation is linear and it has only one root.\n");
	else{
		if(disc<0)	printf("Roots are imaginary.");
		else{
			root1=(-b+sqrt(disc))/(2*a);
			root2=(-b-sqrt(disc))/(2*a);
			printf("Root 1 : %d\nRoot 2 : %d",root1,root2);
		}	
	}
	return 0;
}
	
