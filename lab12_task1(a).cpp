#include<stdio.h>
#include<stdlib.h>

void print_char(const char c,const int n){
	int i;
	for(i=1;i<=n;i++){
		printf("%c",c);	
	}
}
int main(){
	int n;
	char c;
	printf("Enter character:");
	scanf("%c",&c);
	printf("Enter number:");
	scanf("%d",&n);
	print_char(c,n);
	return 0;
}
