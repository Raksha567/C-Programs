#include<stdio.h>
void main(){
	char string[100];
	int i,vowel=0,consonant=0;
	printf("Enter a string:");
	gets(string);
	for(i=0;string[i]!='\0';i++){
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'){
			vowel++;
		}
		else{
			consonant++;
		}
		
	}
			printf("Count of Vowels in string is %d\n",vowel);
		printf("Count of consonant in string is %d",consonant);
	}
