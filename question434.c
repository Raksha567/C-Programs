#include<stdio.h>
void main(){
	int i,j,p;
	for(i=1;i<=4;i++){
		p=3;
		for(j=1;j<=i;j++){
			printf("%d",p);
			p--;
		}
		printf("\n");
	}
	for(i=3;i>=1;i--){
		p=3;
		for(j=1;j<=i;j++){
			printf("%d",p);
			p--;
		}
		printf("\n");
	}
}
