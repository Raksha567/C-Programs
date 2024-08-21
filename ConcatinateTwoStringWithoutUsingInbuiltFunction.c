#include<stdio.h>
void main(){
	char s1[100];
	char s2[100];
	char s3[100];
	int i,j=0,l1=0,l2=0,l3;
	printf("Enter first string:");
	gets(s1);
	printf("Enter second string:");
	gets(s2);
	for(i=0;s1[i]!='\0';i++){
		l1++;
	}
	for(i=0;s2[i]!='\0';i++){
		l2++;
	}
	l3=l1+l2;
	printf("%d\n",l3);
	for(i=0;s1[i]!='\0';i++){
		s3[j]=s1[i];
		j++;
	}
	for(i=0;s2[i]!='\0';i++){
		s3[j]=s2[i];
		j++;
	}
	for(j=0;j<l3;j++){
		printf("%c",s3[j]);
	}
	
	
}
