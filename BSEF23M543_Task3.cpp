#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define SIZE 20
int main(){
	srand(time(0));
	int a[SIZE],countf=0;
	for(int i=0;i<SIZE;i++){
		a[i]=rand()%10;
		printf(" %d ",a[i]);
	}
	return 0;
}
