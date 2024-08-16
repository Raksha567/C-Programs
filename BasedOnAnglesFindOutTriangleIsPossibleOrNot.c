#include<stdio.h>
void main(){
	int angle1,angle2,angle3;
	printf("Enter angle1");
	scanf("%d",&angle1);
	printf("Enter angle2");
	scanf("%d",&angle2);
	printf("Enter angle3");
	scanf("%d",&angle3);
	if(angle1+angle2+angle3==180){
		printf("Given angles can form a triangle.");
	}
	else{
		printf("Given angles can not form a triangle.");
	}
}
