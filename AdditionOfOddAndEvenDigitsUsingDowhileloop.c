#include<stdio.h>
void main(){
	int num,i,r,sum_E=0,sum_o=0;
	printf("Enter any number");
	scanf("%d",&num);
	do{
		r=num%10;
		if(r%2==0){
			sum_E=sum_E+r;
		}
		else if(r%2!=0){
			sum_o=sum_o+r;
		}
		
		num=num/10;
	}while(num>0);
	printf("Sum of even digits is %d\n",sum_E);
	printf("Sum of odd digits is %d",sum_o);
}
