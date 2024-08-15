#include<stdio.h>
void main(){
	int m,n;
	printf("Enter value of m greater than 0,0 or less than 0:\n");
	printf("Enter value of m:");
	scanf("%d",&m);
	if(m>0){
		printf("Value of n is 1.");
	}
	else if(m==0){
		printf("Value of n is 0.");
	}
	else if(m<0){
		printf("Value of n is -1.");
	}
	else{
		printf("Invalid value.");
	}
}
