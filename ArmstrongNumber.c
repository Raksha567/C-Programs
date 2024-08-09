#include<stdio.h>
void main(){
	int num,r,sum=0;
	
	printf("Enter any number:");
	scanf("%d",&num);
	int n=num;
	while(num>0){
		
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
		
	}
	printf("%d",sum);
	if(n==sum){
		printf("Number is armstrong.");
	}
	else{
		printf("Not a armstrong");
	}
}
