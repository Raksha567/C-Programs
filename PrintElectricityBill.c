#include<stdio.h>
void main(){
	int customerId;
	char customerName[50];
	float unitConsumed,totalAmount,surcharge=0;
	printf("enter customer id:");
	scanf("%d",&customerId);
	printf("enter customer name:");
	scanf("%s",customerName);
	printf("Enter unit consumed:");
	scanf("%f",&unitConsumed);
	if(unitConsumed<=199){
		totalAmount=unitConsumed*1.20;
	}
	else if(unitConsumed>=200&&unitConsumed<400){
		totalAmount=unitConsumed*1.50;
	}
	else if(unitConsumed>=400&&unitConsumed<600){
		totalAmount=unitConsumed*1.80;
	}
	else{
		totalAmount=unitConsumed*2.00;
	}
	if(totalAmount>400){
		surcharge=totalAmount*0.15;
		totalAmount=totalAmount+surcharge;
	}
	if(totalAmount<100){
		totalAmount=100;
	}
	printf("Electricity Bill\n");
	printf("CustomerId : %d\n",customerId);
	printf("Customer Name :%s\n",customerName);
	printf("unitConsumed: %f\n",unitConsumed)	;
	printf("Total Amount: Rs %f\n",totalAmount);
}
