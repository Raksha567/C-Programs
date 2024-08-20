#include<stdio.h>
#include<string.h>
void main(){
	char name[15];
	printf("Enter your name:");
	scanf("%s",name);
	printf("Reverse of Name is %s",strrev(name));
	
}
