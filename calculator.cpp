#include <stdio.h>

int main(){
	int a;
	printf("Enter 0 for Addition,1 for Subtraction,2 for Multiplication,and 3 for Division.");
	scanf("%d",&a);
	
	if(a==0){
		int x;
		int y;
		int sum;
		printf("First number : ");
		scanf("%d",&x);
		printf("Second number : ");
		scanf("%d",&y);
		sum=x+y;
		printf("Sum of both numbers : %d",sum);
	}
	if(a==1){
		int x;
		int y;
		int difference;
		printf("First number : ");
		scanf("%d",&x);
		printf("Second number : ");
		scanf("%d",&y);
		difference=x-y;
		printf("Difference of both numbers : %d",difference);
	}
	
	if(a==2){
		int x;
		int y;
		int multiplication;
		printf("First number : ");
		scanf("%d",&x);
		printf("Second number : ");
		scanf("%d",&y);
		multiplication=x*y;
		printf("Product of both numbers : %d",multiplication);
		
	}
	
	if(a==3){
		int x;
		int y;
		int division;
		printf("First number : ");
		scanf("%d",&x);
		printf("Second number : ");
		scanf("%d",&y);
		division=x/y;
		printf("First number divided by Second number : %d",division);
		
	}
	return 0;
}
