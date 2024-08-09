#include<stdio.h>
void main(){
	int notes_1000,notes_500,notes_200,notes_100,notes_50,notes_20,notes_10,amount;
	printf("Enter amount:");
	scanf("%d",&amount);
	notes_1000=amount/1000;
	amount=amount%1000;
	notes_500=amount/500;
	amount=amount%500;
	notes_200=amount/200;
	amount=amount%200;
	notes_100=amount/100;
	amount=amount%100;
	notes_50=amount/50;
	amount=amount%50;
	notes_20=amount/20;
	amount=amount%20;
	notes_10=amount/10;
	printf("notes of 1000 is %d\n",notes_1000);
	printf("notes of 500 is %d\n",notes_500);
	printf("notes of 200 is %d\n",notes_200);
	printf("notes of 100 is %d\n",notes_100);
	printf("notes of 50 is %d\n",notes_50);
	printf("notes of 20 is %d\n",notes_20);
	printf("notes of 10 is %d",notes_10);
}
