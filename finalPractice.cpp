#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(){
	int count=0;
	int x[SIZE]={12,29,39,67,12,33,34,78,19,23};
	for(int i=0;i<SIZE;i++){
		count=0;
		for(int j=0;j<SIZE;j++){
			if(i!=j && x[i]>x[j])
				count++;
		}
		if(count>=3)
			printf(" %d \n",x[i]);
	}
return 0;
}
