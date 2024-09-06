#include<stdio.h>
#include<string.h>
struct stud{
	int id;
	char name[20];
	char phone[11];
};
void main(){
	int i;
	struct stud s1[5];
	printf("Enter id:");
	for(i=0;i<5;i++){
	scanf("%d",&s1[i].id);	
	}
	printf("Enter name:");
	for(i=0;i<5;i++){
		scanf("%s",s1[i].name);
	}
	printf("Enter phoneNumber:");
	for(i=0;i<5;i++){
		scanf("%s",s1[i].phone);
	}
	printf("Student data:\n");
	for(i=0;i<5;i++){
		printf("%d %s %s\n",s1[i].id,s1[i].name,s1[i].phone);
	}
	
	printf("\nStudent data who are having phonenumber with 88 in ending:\n ");
	for(i=0;i<5;i++){
		int len=strlen(s1[i].phone);
		if(s1[i].phone[len-1]=='8'&&s1[i].phone[len-2]=='8'){
			printf("%d %s %s\n",s1[i].id,s1[i].name,s1[i].phone);
		}
	}
	
}
