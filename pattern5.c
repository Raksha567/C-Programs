#include<stdio.h>
void main(){
	int r,c;
	for(r=1;r<=4;r++){
		for(c=1;c<=4;c++){
			if(r%2==0){
				printf("A ");
			}
			else{
				printf("%d ",c);
			}
		}
		printf("\n");
	}
}
