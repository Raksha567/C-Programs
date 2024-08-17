#include<stdio.h>
void main(){
	int i,sum=0;
	printf("Number which are divisible by 9 between 100 and 200 are:");
	for(i=100;i<=200;i++){
		if(i%9==0){
			printf("%d ",i);
			sum=sum+i;
		}
	}
	printf("\nAddition of numbers which is divisible by 9 between 100 and 200 is %d",sum);
}
