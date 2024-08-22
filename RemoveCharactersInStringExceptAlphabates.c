#include<stdio.h>
void main(){
	char s1[100],s2[100];
	int i,c=0;
	printf("Enter a string:");
	gets(s1);
	for(i=0;s1[i]!='\0';i++){
		if((s1[i]>='A'&&s1[i]<='Z')||(s1[i]>='a'&&s1[i]<='z')){
			s2[c]=s1[i];
			c++;
		}
	
	}
	strcpy(s1,s2);
		printf("%s",s1);
}
