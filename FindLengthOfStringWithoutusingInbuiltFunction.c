#include<stdio.h>
void main(){
	char string[100];
	int length=0;
	printf("Enter a String:");
	gets(string);int i;
	for(i=0;string[i]!='\0';i++){
		length++;
	}
	printf("The length of a string is %d",length);
	
}
