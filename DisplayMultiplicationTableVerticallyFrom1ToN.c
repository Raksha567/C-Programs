#include<stdio.h>
void main(){
	int i,n,num,result;
	printf("Enter value of n: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++){
		for(num=1;num<=n;num++){
			result=num*i;
			printf("%d\t",result);
		
					}
					printf("\n");
	}
	
}
