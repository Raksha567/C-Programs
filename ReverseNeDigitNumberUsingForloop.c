#include<stdio.h>
void main(){
	int num,r,rev=0;
	printf("Enter any Number:");
	scanf("%d",&num);
	for(;num>0;){
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	printf("Reverse number is %d",rev);
}
