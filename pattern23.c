#include<stdio.h>
void main(){
	int i,j;
	for(i='A';i<='E';i++){
		for(j='E';j>=i;j--){
			printf("%c",i);
		}
		printf("\n");
	}
}
