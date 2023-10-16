#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	int e1,e2,p1,p2;
	//e1 and e2 for number of eggs for 2 customers,p1 and p2 for number of packs needed for eggs of both customers respectively
	printf("Customer 1 : ");
	scanf("%d",&e1);
	printf("Customer 2 : ");
	scanf("%d",&e2);
	
	p1=e1/6;
	int r1=e1%6;
	if(r1>0)
		p1=p1+1;
		printf("Packs for first customer : %d\n",p1);
	
	p2=e2/6;
	int r2=e2%6;
	if(r2>0)
		p2=p2+1;
		printf("Packs for second customer : %d\n",p2);
	
	if(p1==p2)
		printf("Same number of packs\n");
	else
		printf("Different number of packs");
		
	return 0;	
}
