#include <stdio.h>
 
 int main(){
 	float x;
 	float y;
 	float division;
 	printf("First value = ");
 	scanf("%f",&x);
 	//because in float we use f and not d
 	printf("Second value = ");
 	scanf("%f",&y);
 	division=x/y;
 	printf("Division = %f",division);
 	return 0;
 }
 
