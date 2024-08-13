#include<stdio.h>
void main(){
	int a,b,choice;
	float result;
	printf("Enter 1 for addition\n");
	printf("Enter 2 for subtraction\n");
	printf("Enter 3 for multiplication\n");
	printf("Enter 4 for divison\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	if(choice==1){
			printf("Enter two numbers:");
			scanf("%d%d",&a,&b);
			result=a+b;
			printf("Result is %f",result);
	}
	else if(choice==2){
			printf("Enter two numbers:");
			scanf("%d%d",&a,&b);
			result=a-b;
			printf("Result is %f",result);
	}
	else if(choice==3){
			printf("Enter two numbers:");
			scanf("%d%d",&a,&b);
			result=a*b;
			printf("Result is %f",result);
	}
	else if(choice==4){
			printf("Enter two numbers:");
			scanf("%d%d",&a,&b);
			result=a/b;
			printf("Result is %f",result);
	}
	else{
		printf("Invalid choice");
	}
}
