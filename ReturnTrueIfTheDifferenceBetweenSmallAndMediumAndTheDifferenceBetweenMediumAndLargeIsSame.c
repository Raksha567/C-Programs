#include<stdio.h>
void main(){
	int small,medium,large;
	printf("Enter small ,,medium and large integers:");
	scanf("%d%d%d",&small,&medium,&large);
	if(medium-small==large-medium){
		printf("Yes, Difference between small and medium and difference between medium and large is same");
	}
	else{
		printf("Difference is not same.");
	}
}
