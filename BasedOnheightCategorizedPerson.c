#include<stdio.h>
void main(){
	float height;
	printf("Enter height of person in centimeter:");
	scanf("%f",&height);
	if(height<150.0){
		printf("Person is short.");
	}
	else if(height>=150.0&&height<170.0){
		printf( "Person is average.");
	}
	else if(height>=170.0&&height<190.0){
		printf("Person is Tall.");
	}
	else{
		printf("Person is Very Tall.");
	}
}
