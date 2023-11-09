#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main (){
	srand(time(0));
	int a,b,c;
	a=rand()%100;
	printf("A: %d\n",a);
	b=rand()%100;
	printf("B: %d\n",b);
	c=rand()%100;
	printf("C: %d\n",c);
	if( pow(a,b) ==c)
		printf("1\n");
	else
		printf(" ");
	return 0;
	
}
