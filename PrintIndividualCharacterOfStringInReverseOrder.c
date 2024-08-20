#include<stdio.h>
void main(){
	char string[100];
	int length=0;
	printf("Enter a String:");
	gets(string);int i;
	for(i=0;string[i]!='\0';i++){
		length++;
	}

	for(i=length-1;i>=0;i--){
		printf("%c ",string[i]);
	}
	
}
