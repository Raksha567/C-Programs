#include<stdio.h>
void main(){
	int num,i,r,sum_o=0,sum_E=0;
	printf("Enter any number:");
	scanf("%d",&num);
	int n=num;
	while(num>0){
		
		r=num%10;
		if(r%2==0){
			sum_E=sum_E+r;
		}
		else if(r%2!=0){
			sum_o=sum_o+r;
		}
		num=num/10;
	}
	printf("Addition of even values is %d\n",sum_E);
	printf("Addition of Odd Numbers is %d",sum_o);
	}
	
