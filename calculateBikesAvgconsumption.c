#include<stdio.h>
void main(){
	int total_distance;
	float spent_fuel;
	float avg_consumption;
	printf("enter total distance in km:");
	scanf("%d",&total_distance);
	printf("Enter spent fuel in litre:");
	scanf("%f",&spent_fuel);
	avg_consumption=total_distance/spent_fuel;
	printf("Bikes average consumption is %f km/litre",avg_consumption);
}
