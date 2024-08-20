#include<stdio.h>
#include<string.h>
void main(){
	char a[10]={"Ram"};
	char b[10]={"nam"};
	int c=strcmp(a,b);
	if(c==0){
		printf("Both string are same");
	}
	else{
		printf("Strings are not equal.");
	}
}
