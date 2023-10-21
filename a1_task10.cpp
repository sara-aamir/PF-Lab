#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
     int a, max, i = 1;
     while(i<=5){
        printf("Enter Number: ");
        scanf("%d", &a);
        if(a>max)  max=a;
        i++;
        }
        printf("Maximum Number : %d", max);
    return 0;
}
