#include<stdio.h>
void main(){
	int i,j;
	char p;
	for(i=1;i<=4;i++){
		p='D';
		for(j=1;j<=i;j++){
			printf("%c",p);
			p--;
		}
		printf("\n");
	}
	for(i=3;i>=1;i--){
		p='D';
		for(j=1;j<=i;j++){
			printf("%c",p);
			p--;
		}
		printf("\n");
	}
}
