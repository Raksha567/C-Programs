#include<stdio.h>
void main(){
	int rollNumber;
	char name[50];
	float marks1,marks2,marks3,totalMarks,percentage;
	printf("Enter roll number:");
	scanf("%d",&rollNumber);
	printf("Enter name of student:");
	scanf("%s",name);
	printf("Enter marks of three subjects:");
	scanf("%f%f%f",&marks1,&marks2,&marks3);
	totalMarks=marks1+marks2+marks3;
	percentage=(totalMarks*100)/300;
	printf("Roll number of a student is %d\n",rollNumber);
	printf("Name of student is %s\n",name);
	printf("Percentage of student is %f\n",percentage);
	if(percentage>=60){
		printf("First Divison");
	}
	else if(percentage>=50){
		printf("Second divison");
	}
	else if(percentage>=40){
		printf("Third divison");
	}
	else{
		printf("Fail");
	}
}
