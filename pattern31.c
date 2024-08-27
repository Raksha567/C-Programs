#include<stdio.h>
void main(){
	int i,k,j,p='@';
	for(i=1;i<=4;i++){
		k=1;p++;
	
		for(j=1;j<=7;j++){
	
			if(j>=5-i&&j<=3+i&&k==1){
				printf("%c",p);
			
				k=0;
				
			}
			
			
			else{
				printf(" ");
				k=1;
				
			}
			
		}
		printf("\n");
		
	}
}
