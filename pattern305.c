#include<stdio.h>
void main(){
	int i,j,p;
	for(i=1;i<=5;i++){
		p=1;
		for(j=1;j<=5;j++){
			if(j>=i&&j<=5){
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
