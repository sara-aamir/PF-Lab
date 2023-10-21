#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int input,remainder,selection;
	printf("Enter 0 for tails and 1 for heads : ");
	scanf("%d",&input);
	
	int player1;
	printf("User number : ");
	scanf("%d",&player1);
	
	int player2;
	player2=rand()%5+1;//we have to take input upto 5
	printf("Opponent number : %d\n",player2);
	
	remainder=(player1+player2)%2;//if it comes 0 then it is tails and if it is 1 then it is heads
	
	if(remainder==0 && input==0 || remainder==1 && input==1){
		printf("You have won the toss\n");
		printf("Write 0 for batting and 1 for balling : ");
		scanf("%d",&selection);}// 
	else
		printf("You have lost the toss");
		s
	
	
	
		
	
	return 0;
	}
	
