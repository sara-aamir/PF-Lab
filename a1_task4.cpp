#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	int eggs,packs,remainder;
	printf("Eggs : ");
	scanf("%d",&eggs);
	
	packs=eggs/6;
	remainder=eggs%6;
	
	if(remainder>0)
		packs=packs+1;
		printf("Packs : %d",packs);
	
	
	return 0;
}
