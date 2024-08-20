#include<stdio.h>
#include<string.h>
void main(){
	char s1[10];
	char s2[10];
	printf("enter your name:");
	scanf("%s",s1);
	s2[10]=strcpy(s2,s1);
	printf("Copy of Name s1 is %s",s2);
}
