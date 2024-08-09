#include<stdio.h>
void main(){
	int password;
	printf("Enter password:");
	scanf("%d",&password);
	while(password!=1234){
	

		printf("Incorrect password\n");
		printf("Reenter the password:");
		scanf("%d",&password);
		
	
}
	if(password==1234){
		printf("Correct password");
	}
}
