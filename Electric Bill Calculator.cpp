//Auther:Kelvin Waithera Kariuki
//Admission:PA107/G/24231/24
//Course:Computer Systems Engineering
//A program to calculate electricity bill of a user
#include <stdio.h>
int main () {
	int CustomerID;
	char CustomerName[50];
	float UnitConsumed,chargesperunit,totalbill,surcharges,totalamount;
	
	printf("enter the CustomerID:");
	scanf("%d",&CustomerID);
	printf("enter the CustomerName:");
	scanf("%s",CustomerName);
	printf("enter UnitConsumed:");
	scanf("%f",&UnitConsumed);
	
	if(UnitConsumed<=199){
		chargesperunit=1.20;
	
	}
	else if(UnitConsumed>=200&&UnitConsumed<=400) {
		chargesperunit=1.50;
	}
	else if(UnitConsumed>=400&&UnitConsumed<=600){
		chargesperunit=1.80;
	}
	else if(UnitConsumed>=600){
		chargesperunit=2.00;
	}
	//calculate the totalbill
	totalbill =UnitConsumed *chargesperunit;
	
	if(totalbill>400){
		surcharges =0.15*totalbill;
	}
	//calculata the total amount
	totalamount =surcharges + totalbill;
	
	printf("total amount:%f\n",totalamount);
	
	printf("Customer ID:%d\n",CustomerID);
	printf("Customer Name:%s\n",CustomerName);
	printf("UnitConsumed:%f\n",UnitConsumed);
	printf("chargesperunit:%f\n",chargesperunit);
	printf("total amount:%f\n",totalamount);
	
return 0;
}	
