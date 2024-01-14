#include<stdio.h>

int main(){
	char c[16]="This is a book.";
	printf("%s\n",c);
	int count=0;
	for(int i=0;c[i]!=0;i++){
		if(c[i]>='a' && c[i]<='z')
			count++;
	}
	printf("Thera are %d small letters in this line",count);
	return 0;
}
