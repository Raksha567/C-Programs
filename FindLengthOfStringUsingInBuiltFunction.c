#include<stdio.h>
#include<string.h>
void main(){
	char name[15]; int len;
	printf("Enter your name:");
	scanf("%s",name);
	len=strlen(name);
	printf("Length of string is %d",len);
}
