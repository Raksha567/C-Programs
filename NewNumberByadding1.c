#include<stdio.h>
void main(){
	int num,n1,n2,n3,n4,n5,new_num;
	printf("Enter five digit number:");
	scanf("%d",&num);
	n1=n1%10;
	num=num/10;
	n2=n2%10;
	num=num/10;
	n3=n3%10;
	num=num/10;
	n4=n4%10;
	num=num/10;
	n5=n5%10;
	n1=(n1+1);
	n2=(n2+1);
	n3=(n3+1);
	n4=(n4+1);
	n5=(n5+1);
	new_num=n5*10000+n4*1000+n5*100+n2*10+n1*1;
	printf("Numbrer after calculation is %d",new_num);
}
