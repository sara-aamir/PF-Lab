#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
	int i = 1,c;
	srand(time(0));
	while (i <= 20){
		c = rand() %57+65; 
		printf ("%c ", c);
		i = i + 1;
	}
	return 0;
}
