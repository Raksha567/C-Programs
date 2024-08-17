#include<stdio.h>
void main(){
	int n,i,r,fact,sum=0,originalNum;
	printf("enter any Number:");
	scanf("%d",&n);
	originalNum=n;
	while(originalNum>0){
		fact=1;
		r=originalNum%10;
		for(i=1;i<=r;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		originalNum=originalNum/10;
	}
	printf("%d",sum);
	if(sum==n){
		printf("Strong Number");
	}
	else{
		printf("Not a Strong Number.");
	}
	
}
