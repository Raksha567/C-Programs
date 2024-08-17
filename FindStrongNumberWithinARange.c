#include<stdio.h>
void main(){
	int n1,n2,j,i,r,fact,sum,originalNum;
	printf("Enter n1 and n2:");
	scanf("%d%d",&n1,&n2);
	for(j=n1;j<=n2;j++){
		originalNum=j;
		sum=0;
		while(originalNum>0){
			fact=1;
			r=originalNum%10;
			for(i=1;i<=r;i++){
				fact=fact*i;
			}
			sum=sum+fact;
			originalNum=originalNum/10;
		}
		if(sum==j){
			printf("%d ",j);
		}
	}
}
