#include<stdio.h>
void main(){
	int i,j;
	for(i=1;i<=3;i++){
		for(j=0;j<=3;j++){
			if(i+j<=3){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}
