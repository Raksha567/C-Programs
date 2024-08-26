#include<stdio.h>
void main(){
	int i,j;
	for(i=65;i<=67;i++){
		for(j=1;j<=5;j++){
			if(j==1){
				printf("%c",i);
			}
			else{
				printf("%c",i+32);
			}
		}
		printf("\n");
	}
}
