#include<stdio.h>
void main(){
	int f[256]={0},i;
	char s[100];
	printf("Enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		f[s[i]]++;
		
	}
	for(i=0;s[i]!=0;i++){
		if(f[s[i]]!=0){
		
		printf("%c %d\n",s[i],f[s[i]]);
		f[s[i]]=0;
	}
	}
}
