#include<stdio.h>
void main(){
	float weight1,weight2,number1,number2,total_value,total_number,average_value;
	printf("Enter weight of first item:");
	scanf("%f",&weight1);
	printf("Enter number of first item:");
	scanf("%f",&number1);
	printf("Enter weight of second item :");
	scanf("%f",&weight2);
	printf("Enter number of second item:");
	scanf("%f",&number2);
	total_value=(weight1*number1)+(weight2*number2);
	total_number=number1+number2;
	average_value=total_value/total_number;
	printf("average is %f",average_value);
}
