#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
     int num, product=1, i = 1;
     while(i<=5){
        printf("Enter Number: ");
        scanf("%d", &num);
        i++;
        product=product*num;
    }
    printf("Product : %d",product);
    return 0;
}
