#include<stdio.h>
 
int main( ){ //After input statement, write code to print first value is greater or second
		int f = 1, s = 1; // value is greater or both are equal, no output if both values are zero
		while ( f>0 && s>0) { //Write appropriate condition inside while
		printf ("Enter two values with spaces (both 0 to stop): ");
		scanf("%d %d", &f, &s);
		if(f>s)
			printf("first value is greater\n");
		if(s>f)
			printf("second value is greater\n");
		if(f==s && f!=0 && s!=0)
			printf("Both are equal\n");
		}
	return 0;
}
