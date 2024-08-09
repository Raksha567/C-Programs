#include<stdio.h>
#include<conio.h>
void main(){
	float a,i,p;
	printf("Enter Amount and interest:");
	scanf("%f%f",&a,&i);
	p=a-i;
	printf("principal is %f",p);
	getch();
}
