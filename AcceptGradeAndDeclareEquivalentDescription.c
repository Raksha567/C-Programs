#include<stdio.h>
void main(){
	char grade;
	printf("Enter your grade(E,V,G,A,F):");
	scanf("%c",&grade);
	if(grade=='E'){
		printf("Excellent");
	}
	else if(grade=='V'){
		printf("Very Good");
	}
	else if(grade=='G'){
		printf("Good");
	}
	else if(grade=='A'){
		printf("Average");
	}
	else if(grade=='F'){
		printf("Fail");
	}
	else{
		printf("invalid  grade");
	}
}
