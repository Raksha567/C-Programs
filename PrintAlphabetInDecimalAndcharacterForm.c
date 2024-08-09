#include<stdio.h>
void main(){
	char ch;
	printf("Lowercase Alphabates:\n");
	for(ch='a';ch<='z';ch++){
		printf("Character:%c,Decimal: %d\n",ch,ch);
	}
	printf("Uppercase Alphabets:\n");
		for(ch='A';ch<='Z';ch++){
		printf("Character:%c,Decimal: %d\n",ch,ch);
	}
}
