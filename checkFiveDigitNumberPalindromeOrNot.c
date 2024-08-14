#include<stdio.h>
void main(){
	int num,n1,n2,n3,n4,n5,rev;
	
	printf("Enter five digit number:");
	scanf("%d",&num);
	int original_number=num;
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	num=num/10;
	n5=num%10;
	rev=n1*10000+n2*1000+n3*100+n4*10+n5;
	printf("%d",rev);
	if(original_number==rev){
		printf("It is palindrome");
	}
	else{
		printf("Not a palindrome");
	}
	
}
