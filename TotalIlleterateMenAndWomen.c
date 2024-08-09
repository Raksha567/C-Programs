#include<stdio.h>
#include<conio.h>
void main(){
	//given data
	int total_population=80000;
	int percent_men=52;
	int percent_of_toatal_literacy=48;
	int percentage_total_literate_men=35;

	int total_men,total_woman,total_literate_men,total_literate_woman,total_illiterate_men,total_illiterate_woman,total_literate_people;
		//Calculate Total men and women
		total_men=(total_population*percent_men)/100;
		total_woman=total_population-total_men;
		//calculate total literate men and women
		total_literate_people=(total_population*percent_of_toatal_literacy)/100;
		total_literate_men=(total_population*percentage_total_literate_men)/100;
		total_literate_woman=total_literate_people-	total_literate_men;
		//calculate total number of iiliterate men and illiterate women
		
		total_illiterate_men=total_men-total_literate_men;
		total_illiterate_woman=total_woman-total_literate_woman;
		printf("Total illiterate men in town is %d\n",total_illiterate_men);
		printf("Total illiterate  women in town is %d\n",total_illiterate_woman);
		getch();
		
		
		
}
