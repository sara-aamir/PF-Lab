#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int m1,m2,g1,g2;
	printf("Marks 1 : ");
	scanf("%d",&m1);
	printf("Marks 2 : ");
	scanf("%d",&m2);
	
	if(m1>=85 && m2>=85)       
	  	{g1=1,g2=1;}
	else if(m1>=80 && m2>=80)   
	 	{g1=2;g2=2;}
	else if(m1>=75 && m2>=75)  
	  	{g1=3;g2=3;}
	else if(m1>=70 && m1>=75)  
	  	{g1=4;g2=4;}
	else if(m1>=65 && m2>=65)  
		{g1=5;g2=5;}
	else if(m1>=61 && m1>=61)  
		{g1=6;g2=6;}
	else if(m1>=58 && m2>=58) 
		{g1=7;g2=7;}	
	else if(m1>=55 && m1>=55) 
	   {g1=8;g2=8;}
	else if(m1>=50 && m2>=50) 
	   {g1=9;g2=9;}
	else if(m1>=49 && m2>=49)
	   {g1=10;g2=10;}

	if(g1==g2)
		printf("Same Marks");
	else
		printf("Different Marks");
	
	return 0;
}
