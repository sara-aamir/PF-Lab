#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int i=1,score,sum=0,count=0,count1=0,max=0,min=0,count2=0;
	float avg;
	while(i){
		scanf("%d",&score);
		if(score==-1){
			break;
		}
		sum=sum+score;
		count++;
		
		if(max<score){
			max=score;
			count1=1;
		}
		else if(score==max)
			count1++;
			
		if(min>score){
			min=score;
			count2=1;
		}
		else if(score==min)
				count2++;		
	}
	avg=(sum+1)/count;
	printf("Average: %f\n",avg);
	printf("Max: %d by %d players only\n",max,count1);
	printf("Min: %d by %d players only\n",min,count2);
	
	return 0;
}
        
