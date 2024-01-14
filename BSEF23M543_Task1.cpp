#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	srand(time(0));
	int minog,minuse,minuseog,msguseog,msgog,msguse,socialog,socialuseog,socialuse,generalog,generaluse,generaluseog,fixed=500,total;
	printf("\tPost Paid Mobile Bill\n");
	printf("\t---------------------\n");
	printf("Fixed Charges:\t\t\t\t%d\n",fixed);
	minog=200;
	msgog=200;
	socialog=500;
	generalog=500;
	minuseog=rand()%301+100;
	msguseog=rand()%301+100;
	socialuseog=rand()%801+100;
	generaluseog=rand()%801+100;
	if(minuseog>minog)
		minuse=minuseog-200;
	if(msguseog>msgog)
		msguse=msguseog-200;
	if(socialuseog>socialog)
		socialuse=socialuseog-500;
	if(generaluseog>generalog)
		generaluse=generaluseog-500;
	
	printf("Minutes:\t\t%d\t(%d)\t%d\n",minuseog,minog,minuse);
	printf("Messages:\t\t%d\t(%d)\t%d\n",msguseog,msgog,msguse);
	printf("Social Internet:\t%d\t(%d)\t%d\n",socialuseog,socialog,socialuse);
	printf("General Internet:\t%d\t(%d)\t%d\n",generaluseog,generalog,generaluse);
	printf("-------------------------------------------\n");
	printf("Total Charges:\t\t\t\t%d\n",minuse+msguse+socialuse+socialuse+generaluse+generaluse+generaluse+fixed);
	printf("-------------------------------------------");
	return 0;
}

