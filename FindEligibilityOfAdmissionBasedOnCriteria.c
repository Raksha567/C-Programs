#include<stdio.h>
void main(){
	int math,phy,chem,totalAll,totalMathPhy;
	printf("Enter Marks in math:");
	scanf("%d",&math);
	printf("Enter marks in Physics:");
	scanf("%d",&phy);
	printf("Enter marks in Chemistry:");
	scanf("%d",&chem);
	totalAll=math+phy+chem;
	totalMathPhy=math+phy;
	if(math>=65&&phy>=55&&chem>=50&&(totalAll>=180||totalMathPhy>=140)){
		printf("Eligible");
	}
	else{
		printf("Not Eligible");
	}
}
