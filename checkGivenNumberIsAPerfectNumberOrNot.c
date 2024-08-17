#include<stdio.h>
void main(){
	int i,n,sum=0;
	printf("Enter any Number:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(n%i==0){
			sum=sum+i;
		}
	}
	if(sum==n){
		printf("Perfect Number");
	}
	else{
		printf("Not a Perfect number.");
	}
}
