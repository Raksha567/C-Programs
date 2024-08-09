#include<stdio.h>
void  main(){
	int num,n1,n2,n3,n4,n5,n6,n7;
	printf("Enter a number:");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	num=num/10;
	n5=num%10;
	num=num/10;
	n6=num%10;
	num=num/10;
	n7=num%10;
	printf("%d  %d  %d  %d  %d  %d  %d",n7,n6,n5,n4,n3,n2,n1);
	
	
	
}
