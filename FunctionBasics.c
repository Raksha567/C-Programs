#include<stdio.h>
void msg(){
	printf("Hii\n");
}
void sum(){
	int a=15,b=3;

	printf("Addition of two number is %d\n",a+b);
}
void sub(){
	int a=15,b=3;
	printf("Subtraction is %d\n",a-b);
}
void multi(){
		int a=15,b=3;

	printf("Multiplication is %d\n",a*b);
}
void divide(){
		int a=15,b=3;
	printf("Divison is %d",a/b);
}
void main(){
	msg();
	sum();
	sub();
	multi();
	divide();
}
