#include<stdio.h>
#include<stdlib.h>

int main (){
	int i = 1;
	while (i < 100){
		if (i % 3 == 0)
			printf ("%d ", i);
		if (i % 5 == 0)
			printf ("%d ", i);
		i = i + 1;
	}
	return 0;
}
