#include<stdio.h>
void main(){
	int i,j;
	char p='E';
	
	for(i=1;i<=4;i++){
		p--;
		for(j=1;j<=7;j++){
			
			if(j>=i&&j<=8-i){
				printf("%c",p);
				
			}
			else{
				printf(" ");
			}
	
		}
		printf("\n");
	}
	
}
