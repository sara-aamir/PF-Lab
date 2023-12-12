#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
	#define SIZE 12
	int a[SIZE],i,min1=1000,min2=1000,min3=1000,min4=1000,min=1000,max=0,max1=0,max2=0,max3=0,max4=0,sum=0;
	float avg1,avg2,avg3,avg4;
	for(i=0;i<SIZE;i++){
		a[i]=rand()%90+10;
		printf(" %d ",a[i]);
	}
	
	printf("\nQuarter 1 :");
	for(i=0;i<3;i++){
		printf(" %d ",a[i]);
		sum=sum+a[i];
		if(max1<a[i]) max1=a[i];
		if(min1>a[i]) min1=a[i];
	}
	avg1=(float)sum/SIZE;
	printf(" Average : %f ",avg1);
	printf(" Max : %d ",max1);
	printf(" Min : %d ",min1);
	if(min>min1)  min=min1;
	
	printf("\n");
	printf("Quarter 2 :");
	for(i=3;i<6;i++){
		printf(" %d ",a[i]);
		sum=sum+a[i];
		if(max2<a[i]) max2=a[i];
		if(min2>a[i]) min2=a[i];
	}
	avg2=(float)sum/SIZE;
	printf(" Average : %f ",avg2);
	printf(" Max : %d ",max2);
	printf(" Min : %d ",min2);
	
	printf("\n");
	printf("Quarter 3 :");
	for(i=6;i<9;i++){
		printf(" %d ",a[i]);
		sum=sum+a[i];
		if(max3<a[i]) max3=a[i];
		if(min3>a[i]) min3=a[i];
	}
	avg3=(float)sum/SIZE;
	printf(" Average : %f ",avg3);
	printf(" Max : %d ",max3);
	printf(" Min : %d ",min3);
	
	printf("\n");
	printf("Quarter 4 :");	
	for(i=9;i<12;i++){
		printf(" %d ",a[i]);
		sum=sum+a[i];
		if(max4<a[i]) max4=a[i];
		if(min4>a[i]) min4=a[i];
	}
	avg4=(float)sum/SIZE;
	printf(" Average : %f ",avg4);
	printf(" Max : %d ",max4);
	printf(" Min : %d ",min4);	
	printf("\n");
	printf("Quarter 1 has minimum sale %d\n",min1);
	printf("Quarter 2 has maximum sale %d\n",min2);
	printf("Quarter 1 has minimum average sale %f\n",avg1);
	printf("Quarter 4 has maximum average sale %f\n",avg4);
	return 0;
}
