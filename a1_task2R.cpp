#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	srand(time(0));
	int number,guess;
	number=rand()%10+1;
	
	printf("Guess the number  : ");
	scanf("%d",&guess);
	
	if(guess!=number){
		printf("Guess the number : ");
		scanf("%d",&guess);
	}
	if(guess!=number){
		printf("Guess the number : ");
		scanf("%d",&guess);
	}
	if(guess==number)
		printf("Winner");
	else
		printf("Loser.\nThe number is %d",number);
	return 0;
}
