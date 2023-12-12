#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	#define SIZE 10
	srand(time(0));
	int x[SIZE],max2=0,max=0,sum2=0,sum=0;
	float avg,avg2;
	for(int i=0 ; i<SIZE ;i++){
		x[i]=rand()%19+11;
		printf(" %d ",x[i]);
		sum=sum+x[i];
		if(max<x[i]) max=x[i];
		
	}
	avg=(float)sum/SIZE;
	printf("\n");
	printf("Max :%d\n",max);
	printf("Average :%f\n",avg);
	for(int i=0 ; i<SIZE ;i++){
		if(x[i]%2!=0)
			x[i]=x[i]+1;
	}
	for(int i=0 ; i<SIZE ; i++){
		if(x[i]==x[i+1])
			x[i]=x[i]+2;
	}	
	for(int i=0 ; i<SIZE ;i++){
		printf(" %d ",x[i]);
		sum2=sum2+x[i];
		if(max2<x[i]) max2=x[i];
	}
	avg2=(float)sum2/SIZE;
	printf("\n");
	printf("Max : %d\n",max2);
	printf("Average : %f\n",avg2);
	printf("Difference : %d\n",max2-max);
	printf("Difference of average : %f ",avg2-avg);
	return 0;
}
