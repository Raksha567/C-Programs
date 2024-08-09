#include<stdio.h>
void main(){
	int n1,n2,i,sum=0;
	printf("Enter number 1:");
	scanf("%d",&n1);
	printf("Enter number 2:");
	scanf("%d",&n2);
	for(i=n1;i<n2;i++){
		if(i%17!=0){
			sum=sum+i;
		}
	}
	printf("sum of all numbers which is not divisible by 17 is %d",sum);
}
