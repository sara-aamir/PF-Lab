#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(){
 	int x,y,z,temp;
 	srand(time(0));
 	x=rand();
 	y=rand();
 	z=rand();
 	printf("X: %d\n",x);
 	printf("Y: %d\n",y);
 	printf("Z: %d\n",z);
	
	if(x>y){
	     temp=x;
	     x=y;
	     y=temp;
	 }
	if(y>z){
		temp=y;
		y=z;
		z=temp;
	}
 	if(x>z){
 		temp=x;
 		x=z;
 		z=temp;
	 }
	 printf("\nAscending Order:\n");
	 printf("X: %d\n",x);
	 printf("Y: %d\n",y);
	 printf("Z: %d",z);
	return 0;
 } 
