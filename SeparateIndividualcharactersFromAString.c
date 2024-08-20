#include<stdio.h>
void main(){
	char string[100];
	printf("Enter a String:");
	gets(string);
	int i;
	for(i=0;string[i]!=0;i++){
		printf("%c character is present at %d position\n",string[i],i+1);
	}
}
