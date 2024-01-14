#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
int main(){
	char chr[100];
	printf("Enter your email address:");
	gets(chr);
	int length=strlen(chr);
	int at_position,dot_position;
    int i;
	for(i=0;i<length;i++){
		if(chr[i]=='@')
		at_position=i;
		else if(chr[i]=='.')
		dot_position=i;		
		}
		if(at_position>0&&dot_position>0&& at_position<dot_position)
		printf("ok");
				else
		printf("Invalid");
		return 0;
	}

