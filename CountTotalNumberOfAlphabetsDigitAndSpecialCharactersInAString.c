#include<stdio.h>
void main(){
	char string[100];
	printf("Enter a string:");
	gets(string);
	int i,Alphabet=0,digit=0,special_character=0;
	for(i=0;string[i]!='\0';i++){
		if(string[i]>='a'&&string[i]<='z'||string[i]>='A'&&string[i]<='Z'){
			Alphabet++;
		}
		else if(string[i]>='0'&&string[i]<='9'){
			digit++;
		}
		else{
			special_character++;
		}
	}
	printf("Number of alphabet is %d\n",Alphabet);
	printf("Number of digit is %d\n",digit);
	printf("Number of special Character is %d",special_character);
}
