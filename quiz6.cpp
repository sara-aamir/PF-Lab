#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

int r1, r2, r3, toCountinue = 1;
	while (toCountinue){
		printf ("Enter Roll 1: ");
		scanf("%d", &r1);
		printf ("Enter Roll 2: ");
		scanf("%d", &r2);
		printf ("Enter Roll 3: ");
		scanf("%d", &r3);
		printf ("Rolls are: %d - %d - %d\n", r1, r2, r3);
		if (r1 == r2+1 && r2 == r3+1) toCountinue = 0;
		else if (r1 == r3+1 && r3 == r2+1) toCountinue = 0;
		else if (r3 == r1+1 && r1 == r2+1) toCountinue = 0;
		else if (r3 == r2+1 && r2 == r1+1) toCountinue = 0;
		else if (r2 == r1+1 && r1 == r3+1) toCountinue = 0;
		else if (r2 == r3+1 && r3 == r1+1) toCountinue = 0;
	}
	return 0;
}
