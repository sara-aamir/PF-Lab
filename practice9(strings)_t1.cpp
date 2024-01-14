//Initialize a string with numbers, alphabets and other characters. Write code to count other characters
//only.
#include<stdio.h>
bool isSmallAlphabet(char c){
	return (c >= 'a' && c <= 'z');
}

bool isCapitalAlphabet(char c){
	return (c >= 'A' && c <= 'Z');
}

bool isNumber(char c){
	return (c >= '0' && c <= '9');
}	
int main(){
	int count=0;
	char c[50]="sara 2004 \\, #";
	for(int i=0;c[i]!='#';i++){
		if(!(isSmallAlphabet(c[i]) || isCapitalAlphabet(c[i]) || isNumber(c[i])))
			count++;
	}
	printf(" %d ",count);
return 0;
}
//is condition main yh hai k agar in teenon main sy koi aik b true hai to ! ki wajah sy wo falsa hogi aur count++
//nhi ho ga aur agar aik b false ho ga to ! ki wajah sy true aur count++ hoga             
