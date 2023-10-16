#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int m1,m2,g1,g2;
	
	m1= rand () % 101;
	m2= rand () % 101;
	
	printf("Marks 1 : %d\n",m1);
	printf("Marks 2 : %d\n",m2);
	
	if(m1>=85)       
	  g1=1;
	else if(m1>=80)   
	 g1=2;
	else if(m1>=75)  
	  g1=3;
	else if(m1>=70)  
	  g1=4;
	else if(m1>=65)  
	  g1=5;
	else if(m1>=61)  
	  g1=6;
	else if(m1>=58) 
	   g1=7;	
	else if(m1>=55) 
	   g1=8;
	else if(m1>=50) 
	   g1=9;
	else            
	   g1=10;
	
	if(m2>=85)       
	  g2=1;
	else if(m2>=80)  
	  g2=2;
	else if(m2>=75)  
	  g2=3;
	else if(m2>=70)   
	 g2=4;
	else if(m2>=65)  
	  g2=5;
	else if(m2>=61)  
	  g2=6;
	else if(m2>=58)  
	  g2=7;	
	else if(m2>=55)  
	  g2=8;
	else if(m2>=50)  
	  g2=9;
	else             
	  g2=10;
	
	if(g1==g2)
		printf("Same Marks");
	else
		printf("Different Marks");
	
	return 0;
}
