#include<stdio.h>
void main(){
	char ch;
	printf("Enter an alphabet:");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
			printf("Vowel");
		}
		else{
			printf("Consonant");
		}
	}
	else{
		printf("The character %c is not alphabet",ch);
	}
}
