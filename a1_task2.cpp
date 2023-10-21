#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	srand(time(0));
	int number,guess,attempt,total_attempts;
	number=rand()%10+1;
	attempt=0;
	total_attempts=3;
	while(attempt < total_attempts){
		printf("Guess the number from 1 to 10 : ");
		scanf("%d",&guess);
		attempt++;
		
		if(guess==number){
			printf("Winner");
			break;
			}
		else{
			printf("Loser\n");
		}
		
	}
		if(guess!=number)
		printf("The number is : %d",number);
	return 0;
}
