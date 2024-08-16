#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Odd Numbers Upto %d\n",n);
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf("%d ",i);
			sum=sum+i;
		}
		
	}
	printf("\nSum of Odd Numbers upto %d is %d",n,sum);
	
}
