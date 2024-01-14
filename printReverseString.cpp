#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

void inputString(char c[],int SIZE){	
	gets(c);
}

void printString(char c[],int SIZE){
	printf("String: ");
	for(int i=0;i<SIZE;i++){
		printf(" %c ",c[i]);
	}
}
void printReverse(char c[],int SIZE){
	printf("Reverse String: ");
	for(int i=SIZE-1;i>=0;i--){
		printf(" %c ",c[i]);
	}
}

int main(){
	int SIZE=6;
	char c[SIZE];
	inputString(c,SIZE);
	printString(c,SIZE);
	printf("\n");
	printReverse(c,SIZE);
	return 0;
}
