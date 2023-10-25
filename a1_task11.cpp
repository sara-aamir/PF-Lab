#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
	srand(time(0));
	int i=1,num1,num2;
	
	while(i<=10){
		num1=rand();
		num2=rand();
		printf("First : %d\n",num1);
		printf("Second : %d\n",num2);
		if(num1>num2)
			printf("First number is larger\n");
		else 
			printf("Second number is larger\n");
		i++;
	}
	return 0;
}
