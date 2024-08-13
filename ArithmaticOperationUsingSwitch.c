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
	switch(choice)
	{
		case 1:
			printf("Enter two numbers:");
			scanf("%d%d",&a,&b);
			result=a+b;
			printf("Result is %f",result);
			break;
		case 2:
			printf("Enter two numbers:");
			scanf("%d%d",&a,&b);
			result=a-b;
			printf("Result is %f",result);
			break;
		case 3:
			printf("Enter two numbers:");
			scanf("%d%d",&a,&b);
			result=a*b;
			printf("Result is %f",result);
			break;
		case 4:
			printf("Enter two numbers:");
			scanf("%d%d",&a,&b);
			result=a/b;
			printf("Result is %f",result);
			break;
	    default:
	    	printf("Invalid choice");
	}
}
