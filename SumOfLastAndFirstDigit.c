#include<stdio.h>
#include<conio.h>
void main(){
	int num,n1,n2,n3,n4,sum;
	printf("Enter four digit number:");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	sum=n1+n4;
	printf("sum of first  and last digit is %d",sum);
	getch();
}
