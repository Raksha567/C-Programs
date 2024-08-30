#include<stdio.h>
void isPrime(){
	int num,i,prime=1;
	printf("Enter any number:");
	scanf("%d",&num);
	 if(num>1)
	 {
		for(i=2;i<num;i++){
		if(num%i==0)
		{
			prime=0;
		}
		}
		
		}
		if(prime==1){
			printf("Prime");
		}
		else{
			printf("Not prime");
		}
	}

void main(){
	isPrime();
}
