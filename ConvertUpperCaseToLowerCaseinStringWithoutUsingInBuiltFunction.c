#include<stdio.h>
void main(){
	char s1[100];int i;
	printf("Enter a string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++){
		if(s1[i]>='A'&&s1[i]<='Z'){
			
			printf("%c",s1[i]+32);
		}
	}
	
	
}
