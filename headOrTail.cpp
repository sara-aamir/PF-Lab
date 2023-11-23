#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	int input,remainder,selection1,selection2,userTurn,userScore=0,opponentTurn,opponentScore=0;
	
	printf("Enter 0 for tails and 1 for heads : ");
	scanf("%d",&input);
	
	int player;
	printf("Your number : ");
	scanf("%d",&player);//input number upto 5
	
	int computer;
	computer=rand()%5+1;//we have to take input upto 5
	printf("Computer number : %d\n",computer);
	
	remainder=(player+computer)%2;//if it comes 0 then it is tails and if it is 1 then it is heads
	
	if(remainder==0 && input==0 || remainder==1 && input==1){
		printf("YOU HAVE WON THE TOSS\n");
		printf("Enter 0 for batting and 1 for balling : ");
		scanf("%d",&selection1);
		if(selection1==0){
			printf("You are batting.\n");//user has chosen to bat
			int i=1;
			while( i<=6 ){
				printf("Your turn: ");
				scanf("%d",&userTurn);
				opponentTurn=rand()%5+2;
				printf("Computer number : %d\n",opponentTurn);
				if(userTurn==opponentTurn){
					printf("You are out!\n");
					break;
				}
				userScore=userScore+userTurn;
				i++;
			}
			printf("Your total score=%d\n",userScore);
			printf("Now computer is batting.\n");
			int j=1;
			while( j<=6 ){
				opponentTurn=rand()%5+2;
				printf("Your turn: ");
				scanf("%d",&userTurn);
				printf("Computer number :%d\n",opponentTurn);
				if(opponentTurn==userTurn){
					printf("Computer is out!\n");
					break;
				}
				opponentScore=opponentScore+opponentTurn;
				j++;
			}
			printf("Total computer Score=%d\n",opponentScore);
		}
		else{
			printf("You are balling.\n");//user has chosen to ball
			int j=1;
			while( j<=6 ){
				opponentTurn=rand()%5+2;
				printf("Your turn: ");
				scanf("%d",&userTurn);
				printf("Computer number :%d\n",opponentTurn);
				if(opponentTurn==userTurn){
					printf("Computer is out!\n");
					break;
				}
				opponentScore=opponentScore+opponentTurn;
				j++;
			}
			printf("Total computer score=%d\n",opponentScore);
			printf("Now the computer is balling.\n");
			int i=1;
			while( i<=6 ){
				printf("Your turn: ");
				scanf("%d",&userTurn);
				opponentTurn=rand()%5+2;
				printf("Computer number : %d\n",opponentTurn);
				if(userTurn==opponentTurn){
					printf("You are out!\n");
					break;
				}
				userScore=userScore+userTurn;
				i++;
			}
			printf("Your total score=%d\n",userScore);
		}
		if(userScore>opponentScore)
			printf("CONGRATSS! you have won the game.");
		else
			printf("You have lost the game!");
	}
	
	
	
	else{
		printf("YOU HAVE LOST THE TOSS!\n");
		selection2=rand()%2;
		if(selection2==0){
			printf("Computer is batting.\n");//opponent has chsen to bat
			int j=1;
			while( j<=6 ){
				opponentTurn=rand()%5+2;
				printf("Your turn: ");
				scanf("%d",&userTurn);
				printf("Computer number :%d\n",opponentTurn);
				if(opponentTurn==userTurn){
					printf("Computer is out!\n");
					break;	
				}
				opponentScore=opponentScore+opponentTurn;
				j++;
			}
			printf("Total computer score=%d\n",opponentScore);
			printf("Now you are batting.\n");
			int i=1;
			while( i<=6 ){
				printf("Your turn: ");
				scanf("%d",&userTurn);
				opponentTurn=rand()%5+2;
				printf("Computer number : %d\n",opponentTurn);
				if(userTurn==opponentTurn){
					printf("You are out!\n");
					break;
				}
				userScore=userScore+userTurn;
				i++;
			}
			printf("Your total score=%d\n",userScore);
		}
		else{
			printf("Computer is balling.\n");//opponent has chosen to ball
			int j=1;
			while(j<=6){
				printf("Your turn: ");
				scanf("%d",&userTurn);
				opponentTurn=rand()%5+2;
				printf("Computer number:%d\n",opponentTurn);
				if(userScore==opponentScore){
					printf("You are out!\n");
					break;
				}
				userScore=userScore+userTurn;
				j++;
			}
			printf("Your total score=%d\n",userScore);
			printf("Now you are balling.\n");
			int i=1;
			while( i<=6 ){
				opponentTurn=rand()%5+2;
				printf("Your turn: ");
				scanf("%d",&userTurn);
				printf("Computer number :%d\n",opponentTurn);
				if(opponentTurn==userTurn){
					printf("Computer is out!\n");
					break;
				}
				opponentScore=opponentScore+opponentTurn;
				j++;
			}
			printf("Total computer score=%d\n",opponentScore);
		}
		if(userScore>opponentScore)
			printf("CONGRATSS! you have won the game.");
		else
			printf("You have lost the game!");
	}
	
	
	
	
	return 0;
}
	
