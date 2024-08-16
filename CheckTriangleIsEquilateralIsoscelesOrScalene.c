#include<stdio.h>
void main(){
	int side1,side2,side3;
	printf("Enter first side:");
	scanf("%d",&side1);
	printf("Enter Second side:");
	scanf("%d",&side2);
	printf("Enter third side:");
	scanf("%d",&side3);
	if(side1+side2>side3||side2+side3>side1||side3+side1>side2){
		if(side1==side2&&side2==side3){
			printf("Equilateral Triangle");
		}
		else if(side1==side2||side2==side3||side3==side1){
			printf("Isosceles Triangle");
		}
		else{
			printf("scalene Triangle");
		}
	}
	else{
		printf("The given sides do not form triangle.");
	}
}
