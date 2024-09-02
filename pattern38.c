#include<stdio.h>
void main(){
	int i,j,p;
	
	for(i=1;i<=4;i++){
		p=1;
		for(j=1;j<=7;j++){
		
			if(j>=i&&j<=8-i){
				printf("%d",p);	
				p++;
			}
			else{
				printf(" ");
			
			}
			
			
		}
		printf("\n");
		
		
	}
	
}
