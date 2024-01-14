#include<stdio.h>
#include<stdlib.h>

#define SIZE 1000

int main(){
	char a[SIZE]={"This is a dog .  his name is   breon,  his color is white  "};
	int i,count=0;
	char b[1000];
	for(int i=0;a[i]!=0;i++){
		if(a[i]!=' '){
			b[count]=a[i];
			count++;	
		}
	}
	for (i=0;b[i]!=0;i++){
		printf("%c",b[i]);
	}
}
