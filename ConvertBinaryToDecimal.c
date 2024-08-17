#include<stdio.h>
void main()
{
int n,decimalNum=0,base=1,rem,i=0;
printf("Enter a binary Number:");
scanf("%d",&n);
for(i=0;n!=0;i++){
	rem=n%10;
	decimalNum=decimalNum+rem*base;
	base=base*2;
	n=n/10;
}
printf("Decimal number is %d",decimalNum);
}
