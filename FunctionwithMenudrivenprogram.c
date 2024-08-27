#include<stdio.h>
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
	int choice;
	
	printf("Enter 1 for msg\n");
	printf("Enter 2 for sum\n");
	printf("Enter 3 for subtraction\n");
	printf("Enter 4 for multiplication\n");
	printf("Enter 5 for divison\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	if(choice==1){
		msg();
	}
	else if(choice==2){
		sum();
	}
	else if(choice==3){
		sub();
	}
	else if(choice==4){
		multi();
	}
	else if(choice==5){
		divide();
	}
	else{
		printf("Invalid choice");
	}
}
