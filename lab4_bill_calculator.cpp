#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int unit;	//for storing input of units from user
	int cost;	//to calculate cost of units
	int charges;
	float salesTax;		//to calculate sales tax according to the cost
	float totalBill;	//to calculate total bill that include cost of units and sales tax
	
	//asking input of units from user
	printf("No of units : ");
	scanf("%d",&unit);
	
	//calculating cost according to the number of units
	if(unit<=100)
		cost=(20*unit);
	else if(unit>100 && unit<=200)
		cost=((100*20)+((unit-100)*30));
	else
		cost=((100*20)+(100*30)+((unit-200)*40));
	charges=cost+500;
	//calculating sales tax and total bill according to number of units	
	salesTax=charges*0.1;
	totalBill=salesTax+charges;
	
	//printing the values of cost,sales tax and total bill
	printf("Cost of units : %d\nSales Tax : %f\nTotal Bill : %f",cost,salesTax,totalBill);
	
	return 0;	
}
