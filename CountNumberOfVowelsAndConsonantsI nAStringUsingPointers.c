#include<stdio.h>
void main(){
	char s[100],*p;
	printf("Enter a string:");
	gets(s);
	int c=0,v=0;
	p=&s[0];
	while(*(p)!='\0'){
		if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'){
			v++;
		}
		else{
			c++;
		}
		p++;
	}
	printf("Count of vowels is %d\n",v);
	printf("Count of consonant is %d",c);
}
