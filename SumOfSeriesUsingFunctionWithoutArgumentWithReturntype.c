#include<stdio.h>
float sum(){
	int i,j;
	float result=0,fact;
	for(j=1;j<=5;j++){
		fact=1;
	for(i=1;i<=j;i++){
		fact=fact*i;
	}
	result=result+(fact/j);
	}
	return(result);
}
void main(){
	float r;
	r=sum();
	printf("Sum of series is %f",r);
}
