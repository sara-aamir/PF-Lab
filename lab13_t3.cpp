#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	#define SIZE 10
	srand(time(0));
	int x[SIZE],y[SIZE],z[SIZE],count=0,count2=0;
	for(int i=0;i<SIZE;i++){
		x[i]=rand()%10;
		y[i]=rand()%10;
		printf(" %d+%d=",x[i],y[i]);
		scanf("%d",&z[i]);
		if(z[i]!=x[i]+y[i])
			count++;
		if(z[i]==x[i]+y[i])
			count2++;
	}
	printf("Score : %d/10\n",count2);
	
	for(int i=0;i<SIZE;i++){
		printf(" %d+%d=%d    %d+%d=%d ",x[i],y[i],z[i],x[i],y[i],x[i]+y[i]);
	}
	return 0;
}
