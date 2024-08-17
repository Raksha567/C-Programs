#include<stdio.h>
void main(){
	int n,binary=0,i=1,rem;
	printf("Enter Decimal number:");
	scanf("%d",&n);
	while(n>0){
		rem=n%2;
		binary=binary+rem*i;
		n=n/2;
		i=i*10;
	}
	printf("Binary Number is %d",binary);
}
