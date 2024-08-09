#include<stdio.h>
#include<conio.h>
void main(){
	float DKM,DM,DF,DI,DC;
	printf("Enter distance between two cities in kM:");
	scanf("%f",&DKM);
	DM=DKM*1000;
	DF=3280.8399*DKM;
	DI=39370.079*DKM;
	DC=100000*DKM;
	printf("Distance in meter is: %f\n",DM);
		printf("Distance in feet is: %f\n",DF);
			printf("Distance in inch is: %f\n",DI);
				printf("Distance in centimeter is: %f\n",DC);
				getch();
}
