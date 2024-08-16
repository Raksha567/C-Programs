#include<stdio.h>
void main(){
	float costPrice,sellingPrice,Profit,Loss;
	printf("Enter cost price:");
	scanf("%f",&costPrice);
	printf("Enter Selling Price:");
	scanf("%f",&sellingPrice);
	if(sellingPrice>costPrice){
		Profit=sellingPrice-costPrice;
		printf("Profit: %f",Profit);
	}
	else if(costPrice>sellingPrice){
		Loss=costPrice-sellingPrice;
		printf("Loss: %f",Loss);
	}
	else{
		printf("No profit no loss");
	}
}
