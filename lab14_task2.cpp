#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(0));
	int SIZE=30;
	int list[SIZE],roll[SIZE];
	int count=0;
	for(int i=0;i<SIZE;i++){
		list[i]=rand()%101;
		printf(" %d ",list[i]);
		
}
	printf("\n");
		roll[0]=1;
	for(int i=0;i<SIZE;i++){
		roll[i+1]=roll[i]+1;
		//printf(" %d ",roll[i]);
	}
	int j=rand()%2+3;
	for(int z=0;z<j;z++){
		int k=rand()%30;
		roll[k]=-1;
	}
	printf("Roll no     Marks\n");
	for(int i=0;i<SIZE;i++){
		if(roll[i]>0)
			printf("%d           %d\n",roll[i],list[i]);
		count++;
	}
	
	int marks[count],roll2[count];
	printf("[");
	for(int i=0;i<count;i++){
		if(roll[i]>0){
			roll2[i]=roll[i];
			printf(" %d ",roll2[i]);
		}	
	}
	printf("]\n[");
	for(int i=0;i<count;i++){
		if(roll[i]>0){
			marks[i]=list[i];
			printf(" %d ",marks[i]);	
		}
		
	}
	printf("]");
	return 0;
}
