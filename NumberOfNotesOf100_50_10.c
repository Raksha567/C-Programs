#include<stdio.h>
void main(){
	int amount,notes_10,notes_50,notes_100;
	printf("Enter amount in hundreds");
	scanf("%d",&amount);
	if(amount%100==0||amount%50==0||amount%10==0){
	notes_100=amount/100;
	amount=amount%100;
	notes_50=amount/50;
	amount=amount%50;
	notes_10=amount/10;
	printf("Number of note of 100 is %d\n",notes_100);
	printf("Number of note of 50 is %d\n",notes_50);
	printf("Number of note of 10 is %d\n",notes_10);
}
else{
	printf("Please enter amount in multiple of hundreds,fifty or ten");
}
}
