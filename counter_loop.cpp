#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include <time.h>
int main(){
	int x=5;
	int i=1;
	while(i<=10){
		printf("%d %d",i,x);
		i++;
		x=x+5;
	}
	return 0;
}
