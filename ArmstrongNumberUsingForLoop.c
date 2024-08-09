#include<stdio.h>
void main(){
	int i,num,r,sum=0;
	printf("Enter any number");
	scanf("%d",&num);
	int n=num;
	for(;num>0;){
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	printf("%d\n",sum);
	if(n==sum){
		printf("Armstrong number");
	}
	else{
		printf("not an armstrong number");
	}
}
