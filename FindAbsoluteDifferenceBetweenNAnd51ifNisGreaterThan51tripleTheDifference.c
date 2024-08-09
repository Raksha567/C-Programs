#include<stdio.h>
void main(){
	int n,abDiff;
	printf("Enter value of n");
	scanf("%d",&n);
	if(n>51){
		abDiff=3*(n-51);
		printf("Result is  %d",abDiff);
	}
	else if(n<51){
		abDiff=-(n-51);
		printf("Absolute difference between %d and 51 is %d",n,abDiff);
	}
}
