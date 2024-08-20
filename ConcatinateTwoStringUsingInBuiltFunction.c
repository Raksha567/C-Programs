#include<stdio.h>
#include<string.h>
void main(){
	char a[10]={"Ram"};
	char b[10]={"Shyam"};
	a[10]=strcat(a,b);
	printf("Concatination of two string is %s",a);
}
