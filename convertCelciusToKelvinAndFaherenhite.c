#include<stdio.h>
void main(){
	float celcius,kelvin,faherenhite;
	printf("Enter tempreture in celcius:");
	scanf("%f",&celcius);
	kelvin=celcius+273.15;
	faherenhite=(celcius*9.0/5.0)+32.0;
	printf("%f celcius equal to %f kelvin\n",celcius,kelvin);
	printf("%f celcius equal to %f faherenhite",celcius,faherenhite);
}
