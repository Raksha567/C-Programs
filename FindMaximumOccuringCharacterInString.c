#include<stdio.h>
void main(){
	int f[256]={0};
	char str[100],maxChar;
	int max=0,i;
	printf("Enter a string:");
	gets(str);
	for(i=0;str[i]!='\0';i++){
		f[str[i]]++;
		if(f[str[i]]>max){
			max=f[str[i]];
			maxChar=str[i];
		}
	}
	printf("Maximum Occuring Character in String is %c",maxChar);
}
