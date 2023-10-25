#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	srand(time(0));
	int number,guess;
	number=rand()%10+1;
	printf("Guess the number from 1 to 10 : ");
	scanf("%d",&guess);
		
	if(guess==number){
		printf("Winner");
		return 0;
	}
	printf("Guess the number from 1 to 10 : ");
	scanf("%d",&guess);
		
	if(guess==number){
		printf("Winner");	
		return 0;
	}
	printf("Guess the number from 1 to 10 : ");
	scanf("%d",&guess);
	if(guess==number){
		printf("Winner");	
		return 0;
	}
	else{
		printf("Loser\n");
		printf("The number is : %d",number);
		}
	return 0;
}
