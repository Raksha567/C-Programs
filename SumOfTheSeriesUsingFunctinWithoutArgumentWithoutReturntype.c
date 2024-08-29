#include<stdio.h>
void sum(){
	int i,fact,num,result=0;
	for(num=1;num<=5;num++){
		fact=1;
		for(i=1;i<=num;i++){
			fact=fact*i;
		}
		result=result+(fact/num);
		
	}
	printf("Sum of series is %d",result);
}
void main(){
	sum();
}
