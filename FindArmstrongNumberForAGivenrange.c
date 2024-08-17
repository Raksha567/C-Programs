#include<stdio.h>
void main(){
	int i,j,n1,n2,r,sum,num;
	printf("Enter n1 and n2:");
	scanf("%d%d",&n1,&n2);
	
	for(j=n1;j<=n2;j++){
		num=j;
		sum=0;
		while(num>0){
			r=num%10;
			sum=sum+r*r*r;
			num=num/10;
		}
		if(j==sum){
			printf("%d ",j);
		}
	}
}
