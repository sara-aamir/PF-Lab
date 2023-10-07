#include <stdio.h>

int main(){
	
	int z;
	printf("Enter 0 for addition,and 1 for subtraction");
	scanf("%d",&z);
	
	if(z==0){
		int x;
		int y;
		int sum;
		printf("Enter the first number : ");
		scanf("%d",&x);
		printf("Enter the second number : ");
		scanf("%d",&y);
		sum=x+y;
		printf("Sum of both numbers : %d",sum);
	}
	else{
		int a;
		int b;
		int difference;
		printf("First value : ");
		scanf("%d",&a);
		printf("Second value : ");
		scanf("%d",&b);
		difference=a-b;
		printf("Difference : %d",difference);
	}
	return 0;
}
