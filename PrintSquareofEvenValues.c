#include<stdio.h>
void main(){
	int i,limit,square;
	printf("Enter Limit:");
	scanf("%d",&limit);
	for(i=1;i<limit;i++){
		if(i%2==0){
		
		square=i*i;
		printf("%d\n",square);
		}
	}
}
