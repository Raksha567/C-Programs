#include<stdio.h>
#include<string.h>
void main(){
	char str1[100];
	char str2[100];
	int i,j,found=0;
	printf("Enter first string:");
	scanf("%s",str1);
	printf("Enter second string:");
	scanf("%s",str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	if(len1==len2){
		int len=len1;
		for(i=0;i<len;i++){
			for(j=0;j<len;j++){
				if(str1[i]==str2[j]){
					found++;;
				}
			}
			
		}
		if(found==len){
			printf("anagram");
		}
		else{
			printf("Not anagram");
		}
	}
	else{
		printf("Not anagram");
}
}
