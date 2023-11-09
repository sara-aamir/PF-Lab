#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(0));
	int i,roll,mid,fin,sessional,total,avgTot=0,avgMid=0,avgSes=0,avgFin=0,max1=0,max2=0,max3=0,max4=0,min1=0,min2=0,min3=0,min4=0,pass=0;
	printf("Rollno\tMid\tFinal\tSessional\tTotal\tGrades\n");
	i=1;
	while(i<=30){
		mid=rand()%36;
		fin=rand()%40+1;
		sessional=rand()%26;
		total=mid+fin+sessional;
		printf("%d\t%d\t%d\t%d\t\t%d",i,mid,fin,sessional,total);
		avgTot=avgTot+total;
		avgMid=avgMid+mid;
		avgSes=avgSes+sessional; 
		avgFin=avgFin+fin;
		if(max1<mid)
			max1=mid;
		if(max2<sessional)
			max2=sessional;
		if(max3<fin)
			max3=fin;
		if(max4<total)
			max4=total;
		if(min1>mid)
			min1=mid;
		if(min2>mid)
			min2=mid;
		if(min3>mid)
			min3=mid;
		if(min4>total);
			min4=total;
		if(total>=85) printf("A\n");  pass++;	
		if(total>=80) printf("A-\n");  pass++;	
		if(total>=75) printf("B+\n");  pass++;	
		if(total>=70) printf("B\n");  pass++;	
		if(total>=65) printf("B-\n");  pass++;	
		if(total>=60) printf("C+\n");  pass++;	
		if(total>=58) printf("C\n");  pass++;	
		if(total>=55) printf("C-\n");  pass++;	
		if(total>=50) printf("D\n");  pass++;	
		if(total<50)  printf("F\n");  	
		i++;
	}
	printf("Total : 30\n");
	printf("pass : %d\n",pass);
	printf("Overall average marks : %d\n",avgTot/(float)30);
	printf("Average Midterm marks : %d\n",avgMid/(float)30);
	printf("Average sessional marks :%d\n",avgSes/(float)30);
	printf("Average final marks : %d\n",avgFin/(float)30);
	printf("Maximum marks : %d\n",max4);
	printf("Maximum midterm marks :%d\n",max1);
	printf("Maximum sessional : %d\n",max2);
	printf("Maximum final : %d\n",max3);
	printf("Minimum marks : %d\n",min4);
	printf("Minimum midterm marks :%d\n",min1);
	printf("Minimum sessional : %d\n",min2);
	printf("Minimum final : %d\n",min3);

	
	return 0;
}
