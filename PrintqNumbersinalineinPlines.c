#include<stdio.h>
void main(){
	int i,j,p,q;
	printf("Enter number of lines:");
	scanf("%d",&p);
	printf("Enter maximum numbers in a line:");
	scanf("%d",&q);
	for(i=0;i<p;i++){
		for(j=1;j<=q;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}
