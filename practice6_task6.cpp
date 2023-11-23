#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	srand(time(0));
	int n1,n2,n3,avg,sum,i,set,max_avg=0;
	for(i=1;i<=10;i++){
		set=i;
		n1=rand()%100;
		n2=rand()%100;
		n3=rand()%100;
		sum=n1+n2+n3;
		avg=(sum)/3;
		printf("Set:%d\nNumbers:%d  %d  %d \nAverage:%d\n\n",set,n1,n2,n3,avg);
		if(avg>max_avg){
			max_avg=avg;
			printf("Set %d has highest average\n\n",set);	
		}
		set=set+1;
	}
	
	return 0;
}
