#include<stdio.h>
void main(){
	int i,j;
	char p='F';
	for(i=1;i<=5;i++){
		p=p-1;
		for(j=1;j<=5;j++){
			if(j>=i&&j<=5){
				printf("%c",p);
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
