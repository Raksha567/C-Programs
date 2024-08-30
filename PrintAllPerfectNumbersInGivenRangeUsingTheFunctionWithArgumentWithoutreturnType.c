#include<stdio.h>
void isPerfect(int n1,int n2){
	int i,j,sum,num;
	for(i=n1;i<=n2;i++){
		sum=0;num=i;
		for(j=1;j<num;j++){
			if(num%j==0){
				sum=sum+j;
			}
		}
		if(i==sum){
			printf("%d ",i);
		}
	}
}
void main(){
	int num1,num2;
	printf("Enter value of num1:");
	scanf("%d",&num1);
	printf("Enter value of num2:");
	scanf("%d",&num2);
	isPerfect(num1,num2);
	
}
