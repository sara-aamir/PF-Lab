#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
	int x = 8, y = 6, z = 5,temp;
	if (x > y){
		x= x + y;
		y= x - y;
		x= x - y;
	}
	if (y > z){
		temp = y;
		z = y ;
		y = temp;
	}
	printf ("%d %d %d", x, y, z);
	return 0;
}
