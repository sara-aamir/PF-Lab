#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
	#define SIZE 10
	int x[SIZE],countEven=0,countOdd=0;
	for(int i=0; i<SIZE ; i++){
		x[i]=rand()%100;
		printf(" %d ",x[i]);
		printf("\n");
		if(x[i]%2==0)
			countEven++;
		if(x[i]%2!=0)
			countOdd++;
		printf(" %d ",x[i]%2==0);
		
			
	}
	return 0;
}
