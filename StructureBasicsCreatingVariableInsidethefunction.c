#include<stdio.h>
struct stud{
	int id;
	char name[20];
	char phone[20];
};
void main(){
	struct stud s1={
		2,"raksha","1234"
	};
	printf("Id is %d\n",s1.id);
	printf("Name is %s\n",s1.name);
	printf("Phone number is %s",s1.phone);
}
