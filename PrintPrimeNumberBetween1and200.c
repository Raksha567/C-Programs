#include<stdio.h>
void main()
{
	int num,i,isPrime;
	printf("Prime Number between 1 and 200 are:");
	for(num=2;num<=200;num++){
		isPrime=1;
		for(i=2;i<num;i++){
			if(num%i==0){
				isPrime=0;
				break;
			}
		}
  if(isPrime==1){
			printf("%d ",num);
		}
	}
	printf("\n");
	
}

	 

