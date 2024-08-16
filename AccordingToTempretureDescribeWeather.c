#include<stdio.h>
void main(){
	int temp;
	printf("Enter tempreture in degree celcius:");
	scanf("%d",&temp);
	if(temp<0){
		printf("Freezing weather");
	}
	else if(temp>=0&&temp<=10){
		printf("Very Cold Weather");
	}
	else if(temp>=10&&temp<=20){
		printf("Cold weather");
	}
	else if(temp>=20&&temp<=30){
		printf("Normal in Tempreture");
	}
	else if(temp>=30&&temp<=40){
		printf("Hot weather");
	}
	else{
		printf("Very hot Weather");
	}
}
