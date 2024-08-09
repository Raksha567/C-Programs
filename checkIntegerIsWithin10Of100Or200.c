#include<stdio.h>
#include<math.h>
void main(){
	int n;
	printf("Enter Value of n:");
	scanf("%d",&n);
	if(abs(n-100)<=10||abs(n-200)<=10){
		printf("True");
	}
	else{
		printf("False");
	}
}
