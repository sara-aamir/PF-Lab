#include<stdio.h>

void inputStrings(char s1[],char s2[],int SIZE){
	printf("First String: ");
	gets(s1);
	printf("Second String: ");
	gets(s2);
}

void printSameOrDifferent(char s1[],char s2[],int SIZE){
	int i;
	for(i=0;s1[i]!=0 && s2[i]!=0;i++)
		if(s1[i]!=s2[i])   break;
	if(s1[i]==0 && s2[i]==0)
		printf("Both strings are same.");
	else
		printf("Both strings are different.");
} 

int main(){
	int SIZE=10;
	char s1[SIZE];
	char s2[SIZE];
	inputStrings(s1,s2,SIZE);
	printSameOrDifferent(s1,s2,SIZE);
	return 0;
}
