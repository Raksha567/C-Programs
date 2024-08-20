#include<stdio.h>
#include<string.h>
void main(){
	char name[10];
	printf("Enter your Name: ");
	scanf("%s",name);
	printf("Name in Upper case is %s",strupr(name));

}
