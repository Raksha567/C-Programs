#include<stdio.h>
void main(){
	int j,i,n1,n2,sum,isPerfect;
	printf("Enter n1 and n2:");
	scanf("%d%d",&n1,&n2);
	for(j=n1;j<=n2;j++){
		sum=0;
		for(i=1;i<j;i++){
			if(j%i==0){
				sum=sum+i;
			}
			
		}
		if(j==sum){
				printf("%d ",j);
			}
	
		}
	
	
	
	
}
