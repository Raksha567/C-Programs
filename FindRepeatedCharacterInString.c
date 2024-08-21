#include<stdio.h>
void main(){
	char s[100];
	int i,j,repeated=0;
	printf("enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		for(j=i+1;s[j]!=0;j++){
			if(s[i]==s[j]){
				printf("First repeated character in string is %c\n",s[i]);
				repeated=1;
				break;
			}
		}
	}
	if(!repeated){
		printf("No repeated character found in a string.");
	}
}
