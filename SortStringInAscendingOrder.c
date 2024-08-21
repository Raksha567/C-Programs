#include<stdio.h>
#include<string.h>
void main(){
	int i,j,len;
	char s[100],temp;
	printf("Enter a string:");
	gets(s);
	len=strlen(s);
	for(i=0;i<len-1;i++){
		for(j=i+1;j<len-1;j++){
			if(s[i]>s[j]){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("Sorted string in ascending order is %s",s);
}
