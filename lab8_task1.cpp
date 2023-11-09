#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int choice,i,score;
	printf("1 is for addition,2 is for subtraction,3 is for multiplication\n");
	choice=rand()%3+1;
	printf("%d\n",choice);
	i=1;
	while(i<=10){
		int a,b,sum,difference,product,guess;
		if(choice==1){
			a=rand()%100;
			b=rand()%100;
			printf("N1 : %d\n",a);
			printf("N2 : %d\n",b);
			sum=a+b;
			printf("Answer : ");
			scanf("%d",&guess);
			if(sum==guess)
				printf("Correct\n");
			else
				printf("Incorrect\n");
		}
		else if(choice==2){
			a=rand()%90+10;
			b=rand()<a;
			printf("N1 : %d\n",a);
			printf("N2 : %d\n",b);
			difference=a-b;
			printf("Answer : ");
			scanf("%d",&guess);
			if(difference==guess)
				printf("Correct\n");
			else
				printf("Incorrect\n");
		}
	
		else if(choice==3){
			a=rand()%10;
			b=rand()%10;
			printf("N1 : %d\n",a);
			printf("N2 : %d\n",b);
			product=a*b;
			printf("Answer : ");
			scanf("%d",&guess);
			if(product==guess)
				printf("Correct\n");
			else
				printf("Incorrect\n");
		}
		i++;
		choice=rand()%3+1;
		printf("%d\n",choice);
		if(sum==guess || difference==guess || product==guess)
		score++;
	}
	printf("The score is %d out of 10",score);
	return 0;
}
