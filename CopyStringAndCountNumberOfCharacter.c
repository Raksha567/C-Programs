#include<stdio.h>
void main(){
	char source[100];
	char destination[100];
	int i,count=0;
	printf("Enter a string:");
	gets(source);
	for(i=0;source[i]!='\0';i++){
		destination[i]=source[i];
		count++;
		
	}
	printf("Number of Character copied is %d",count);
}
