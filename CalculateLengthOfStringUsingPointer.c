#include<stdio.h>
void main(){
	char s[100],*p;
	printf("Enter a string:");
	gets(s);
	int i=0;
	p=&s[0];
	while(*(p+i)!='\0'){
		i++;
	}
	printf("Length of string is %d",i);
}
