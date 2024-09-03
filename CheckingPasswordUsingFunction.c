#include<stdio.h>
int isPassword(int pass){
	if(pass==1234){
		return 1;
	}
	else{
		return 0;
	}
	
}
void main(){
	int password;
	printf("Enter Password:");
	scanf("%d",&password);
	if(isPassword(password)){
		printf("Correct Password");
	}
	else{
		printf("Incorrect password");
	}
	
}
