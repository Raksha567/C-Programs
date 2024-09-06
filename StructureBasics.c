#include<stdio.h>
struct stud{
	int id;
	char name[20];
	char phone[20];
}s1;
void main(){
	printf("enter id:");
	scanf("%d",&s1.id);
	printf("Enter name:");
	scanf("%s",s1.name);
	printf("Enter phone number:");
	scanf("%s",s1.phone);
	printf("id is %d\n",s1.id);
	printf("name is %s\n",s1.name);
	printf("phone number is %s",s1.phone);
}
