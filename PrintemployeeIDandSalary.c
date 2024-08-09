#include<stdio.h>
void main(){
	int ID;
	int total_worked_hours;
	int Amount_per_hour;
	float salary;
	printf("enter Employee ID:");
	scanf("%d",&ID);
	printf("Enter total worked hours:");
	scanf("%d",&total_worked_hours);
	printf("Enter amount Per hour:");
	scanf("%d",&Amount_per_hour);
	salary=total_worked_hours*Amount_per_hour;
	printf("salary of employee in a month is %f\n",salary);
	printf("Employee id of employee is %d",ID);
	
}
