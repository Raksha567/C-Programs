#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Natural even numbers Upto %d are",n);
	for(i=2;i<=n;i++){
		if(i%2==0){
			printf("%d ",i);
			sum=sum+i;
		}
		
	}
printf("\nSum of even numbers upto %d is %d",n,sum)	;
}
