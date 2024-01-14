#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 30
int main(){
	srand(time(0));
	int marks[SIZE],pass=0,sum=0;
	float avg;
	for(int i=0;i<SIZE;i++){
		marks[i]=rand()%100+1;
		printf(" %d ",marks[i]);
		
	}
	for(int i=0;i<SIZE;i++){
		if(marks[i]>=50){
			pass++;
			sum=sum+marks[i];
		}
	}
	avg=float(sum)/pass;
	printf("\nPass: %d ",pass);
	printf("\nAverage of pass students: %f",avg);
	printf("\nMarks of failed students: ");
	for(int i=0;i<SIZE;i++){
		if(marks[i]<50)
			printf(" %d ",marks[i]);
	}
	printf("\nMarks of below average students: ");
	for(int i=0;i<SIZE;i++){
		if(marks[i]<avg)
			printf(" %d ",marks[i]);
	}
	printf("\nMarks of above average students: ");
	for(int i=0;i<SIZE;i++){
		if(marks[i]>avg)
			printf(" %d ",marks[i]);
	}
	return 0;
}
