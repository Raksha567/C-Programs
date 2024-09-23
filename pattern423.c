#include<stdio.h>
void main(){
	int i,s,j;
	char ch;
	for(i=0;i<4;i++){
		ch='A';
		for(s=0;s<i;s++){
			printf(" ");
		}
		for(j=0;j<(4-i)*2-1;j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
