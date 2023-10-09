#include <stdio.h>

int main(){
	int males;
	int females;
	printf("Enter number of Males:   ");
	scanf("%d",&males);
	printf("\nEnter number of Females: ");
	scanf("%d",&females);
	
	int total;
	total=males+females;
	int perMale;
	perMale=(males*100)/total;
	int perFemale;
	perFemale=(females*100)/total;
	
	if(perMale>perFemale){
		printf("==============================\n");
		printf("| Percentage of Males:   %d  |\n",perMale);
		printf("| Percentage of Females: %d  |\n",perFemale);
		printf("==============================");
	}
		
	else{
	printf("\t\t\t\t\t\t\t\t\t\t************************************\n");
	printf("\t\t\t\t\t\t\t\t\t\t***  Percentage of Females: %d   ***\n",perFemale);
	printf("\t\t\t\t\t\t\t\t\t\t***  Percentage of Males:   %d   ***\n",perMale);
	printf("\t\t\t\t\t\t\t\t\t\t************************************");
	}
	return 0;
}
