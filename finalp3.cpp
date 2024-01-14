#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 10
int main(){
	srand(time(0));
	int a[SIZE], b[50];
	for(int i=0;i<SIZE;i++){
		a[i]=rand()%10;
	}
	for(int i=0;i<SIZE;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
	for(int i=0;i<50;i++){
		b[i]=a[i%SIZE];	
	}
	for(int i=0;i<50;i++){
		printf(" %d ",b[i]);
	}
	int count,maxcount=0,maxcountElement=0;
	for(int i=0;i<50;i++){
		count=0;
		for(int j=0;j<50;j++){
			if(a[i]==b[i])
			count++;
		}
		if(count>maxcount){
			maxcount=count;
			maxcountElement=a[i];
	}
	}
	
	printf("\n%d element occurs max.It occurs %d times",maxcountElement,maxcount);
	
}
