#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
	srand(time(0));
	int x[10][10],i,j,k,temp;
	printf("Before Sorting: \n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			x[i][j]=rand()%10;
			printf(" %d ",x[i][j]);
		}
		printf("\n");
	}
	printf("After Sorting: \n");
	for(k=0;k<10;k++){
		for(i=0; i<10-1 ;i++){
			for(j=0;j<10-i-1;j++){
				if(x[j][k]>x[j+1][k]){
					temp=x[j][k];
					x[j][k]=x[j+1][k];
					x[j+1][k]=temp;
				}
			}
		}
	}
	for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf(" %d ", x[i][j]);
        }
        printf("\n");
    }

	return 0;
}
