#include<stdio.h>
void main(){
	char string[100];
		int i,word=1;
	printf("Enter a string:");
	gets(string);
	for(i=0;string[i]!='\0';i++)
{
	if(string[i]==' '){
		word++;
	}
}
printf("There are %d words in a string",word);
}
