#include<stdio.h>
void main(){
	int i,j,p;
	p=9;
	
	for(i=1;i<=4;i++){
	p=p-2;
		for(j=1;j<=7;j++){
			
			if(j>=i&&j<=8-i){
				printf("%d",p);
				
			}
			else{
				printf(" ");
			}
	
		}
		printf("\n");
	}
	
}
