#include<stdio.h>
void main(){
	char source[100];
	char destination[100];
	int i;
	printf("Enter a String:");
	gets(source);
	for(i=0;source[i]!='\0';i++){
		destination[i]=source[i];
	}
	
	printf("Copied string is %s",destination);
}
