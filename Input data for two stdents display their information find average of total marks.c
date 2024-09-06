#include<stdio.h>
struct stud{
	char name[20];
	int age;
	int totalMarks;
};
void main(){
	struct stud s1,s2;
	float sum,avg;
	
	printf("Enter name,age and total marks of first student:");
	scanf("%s %d  %d",s1.name,&s1.age,&s1.totalMarks);
		printf("Enter name,age and total marks of second student:");
	scanf("%s %d  %d",s2.name,&s2.age,&s2.totalMarks);
	printf("Information of first student:\n");
	printf("%s %d %d\n",s1.name,s1.age,s1.totalMarks);
	printf("Information of second student:\n");
	printf("%s %d %d\n",s2.name,s2.age,s2.totalMarks);
	sum=s1.totalMarks+s2.totalMarks;
	avg=sum/2;
	printf("Average of total marks is %f",avg);
}
