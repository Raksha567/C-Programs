#include<stdio.h>
void main(){
	float total_selling_price_of_15_items,total_proffit,selling_price_of_one_item,cost_price_of_one_item,total_cost_price_of_15_items;
	printf("Total selling price of 15 items:");
	scanf("%f",&total_selling_price_of_15_items);
	printf("Total Proffit:");
	scanf("%f",&total_proffit);
	total_cost_price_of_15_items=total_selling_price_of_15_items-total_proffit;
	cost_price_of_one_item=	total_cost_price_of_15_items/15;
	printf("Cost price of one item is %f",	cost_price_of_one_item);
	
}
