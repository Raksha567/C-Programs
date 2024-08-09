#include<stdio.h>
void main(){
	int i,r,num,sum=0;
	
	printf("Enter any number:");
	scanf("%d",&num);
	int n=num;
	do{
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}while(num>0);
	printf("%d\n",sum);
	if(n==sum){
		printf("It is armstrong number");
	}
	else{
		printf("It is not a armstrong number");
	}
}
