#include<stdio.h>
void main(){
	int monthNumber;
	printf("Enter Monthnumber:");
	scanf("%d",&monthNumber);
	switch(monthNumber){
		case 1:
			printf("January");
			break;
		case 2:
			printf("February");
			break;
		case 3:
			printf("March");
			break;
		case 4:
			printf("April");
			break;
		case 5:
			printf("May");
			break;
		case 6:
			printf("June");
			break;
		case 7:
			printf("july");
			break;	
		case 8:
			printf("August");
			break;
		case 9:
			printf("september");
			break;
		case 10:
			printf("October");
			break;
		case 11:
			printf("November");	
			break;
		case 12:
			printf("december");	
			break;
		default:
		printf("Invalid MonthNumber");			
			
	}
}
