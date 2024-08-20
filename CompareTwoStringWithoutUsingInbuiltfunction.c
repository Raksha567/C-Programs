#include<stdio.h>
void main(){
	char s1[100];
	char s2[100];
	int i,isEqual=1;
	printf("Enter first string:");
	gets(s1);
	printf("Enter second string:");
	gets(s2);
	for(i=0;s1[i]!='\0'||s2[i]!='\0';i++){
		if(s1[i]!=s2[i]){
			isEqual=0;
			break;
		}
	}
	if(isEqual==1){
		printf("The strings Are equal.");
	}
	else{
		printf("The strings are not equal.");
	}
	
}
