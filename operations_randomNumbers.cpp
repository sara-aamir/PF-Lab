#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
	int x,y;
	srand(time(0));
	x=rand()%5;
	y=rand()%5;
	printf("%d > %d = %d\n",x,y,x>y);
	printf("%d < %d = %d\n",x,y,x<y);
	printf("%d >= %d = %d\n",x,y,x>=y);
	printf("%d <= %d = %d\n",x,y,x<=y);
	printf("%d == %d = %d\n",x,y,x==y);
	printf("%d != %d =%d\n", x, y, x != y);
	return 0;
}
