#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	float i,num,sum=0,avg,max1=0,max2=0,min1=0,min2=0;
	for(i=1;i<=15;i++){
		printf("Number: ");
		scanf("%f",&num);
		sum=sum+num;
		if(num>max1){
			max2=max1;
			max1=num;
		}
		if(num>max2 && num<max1){
			max2=num;
		}
		if(num<min1){
			min2=min1;
			min1=num;
		}
		if(num<min2 && num>min1){
			min2=num;
		}
	}
	avg=(sum)/float(15);
	printf("Average:%f\n",avg);
	printf("Maximum:%f\n",max1);
	printf("Second Maximum:%f\n",max2);
	printf("Minimum:%f\n",min1);
	printf("Second Minimum:%f\n",min2);
	
	return 0;
}
