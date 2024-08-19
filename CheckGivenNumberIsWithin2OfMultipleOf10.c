#include<stdio.h>
void main(){
	int num,remainder;
	printf("Enter a number:");
	scanf("%d",&num);
	remainder=num%10;
	if(remainder==0||remainder==1||remainder==2||remainder==8||remainder==9){
		printf("%d is within 2 of multiple of 10",num);
	}
	else{
		printf("%d is not within 2 of multiple of 10",num);
	}
}
