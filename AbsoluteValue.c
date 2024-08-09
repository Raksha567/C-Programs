#include<stdio.h>
void main(){
	int a,result;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a<0){
		result=-1*a;
		printf("Absolute Value is %d",result);
	}
	else{
		printf("Absolute value is %d",a);
	}
	
}
