#include<stdio.h>
void main(){
	int num,r,sum_E=0,sum_o=0;
	printf("Enter any number:");
	scanf("%d",&num);
	for(;num>0;){
		r=num%10;
		if(r%2==0){
			sum_E=sum_E+r;
		}
		else if(r%2!=0){
			sum_o=sum_o+r;
		}
		num=num/10;
	}
	printf("Addition of even digits is %d\n",sum_E);
	printf("Addition of odd digits is %d",sum_o);
}
