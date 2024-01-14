#include <stdio.h>

void input(int *x,int *y){
	printf("First number : ");
	scanf("%d",x);
	printf("Second number : ");
	scanf("%d",y);
}

int performSum(int x,int y){
	int sum;
	sum=x+y;
	printf("Sum of both numbers : %d",sum);
}
	
int performDifference(int x,int y){
	int difference;
	difference=x-y;
	printf("Difference of both numbers : %d",difference);
}
	
int performMultiplication(int x,int y){
	int multiplication;
	multiplication=x*y;
	printf("Product of both numbers : %d",multiplication);
}
	
float performDivision(int x,int y){
	float division;
	division=x/y;
	printf("First number divided by Second number : %f",division);
}

int main(){
	int choice;
	printf("Enter 0 for Addition,1 for Subtraction,2 for Multiplication,and 3 for Division.");
	scanf("%d",&choice);
	int x,y;
	input(&x,&y);
	if(choice==0){
		performSum(x,y);
	}
	else if(choice==1){
		performDifference(x,y);
	}
	else if(choice==2){
		performMultiplication(x,y);
	}
	else if(choice==3){
		performDivision(x,y);
	}
	return 0;
}
