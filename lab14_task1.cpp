#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LENGTH 10
int main(){
	srand(time(0));
	int x[LENGTH],y[LENGTH],temp;
	for(int i=0;i<LENGTH;i++){
		x[i]=rand()%90+10;
	}
	for(int i=0;i<LENGTH;i++){
		y[i]=x[i];
		printf(" %d ",y[i]);
	}
	printf("\n");
	int i,j;
	for(int j=0; j<LENGTH-1 ;j++){
		for(int i=0;i<LENGTH-1;i++){
			if(y[i]>y[i+1]){
				temp=y[i];
				y[i]=y[i+1];
				y[i+1]=temp;
			}	
		}
		for(int i=0;i<LENGTH;i++)
			printf(" %d ",y[i]);
			printf("\n");
	}
	
	for(int i=0;i<LENGTH;i++)
		printf(" %d ",y[i]);
	printf("\n");
	for(int i=0;i<LENGTH;i++){
		for(int j=0;j<LENGTH;j++){
			if(x[i]==y[j])
			printf("%d is on position %d\n",x[i],j);
		
		}		
	}
	return 0;
}
