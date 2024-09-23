#include<stdio.h>
void main(){
	int i,space,j;
	for(i=1;i<=4;i++){
		for(space=1;space<=4-i;space++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
