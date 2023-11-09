#include<stdio.h>

int main(){
	int i = 1;
	while (i<=10){ //Write missing statements to print output as in the box
		printf ("%d ", i); //without modifying the given code
		if (i % 2 == 0 && i != 10){
            printf(" : ");
        } 
		else if (i != 10){
            printf(" ");
        }

		i++;
		
	}
}
