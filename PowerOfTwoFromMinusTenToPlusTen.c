#include<stdio.h>
#include<math.h>
void main(){
	int power;float result;
	printf("Power\t2^power\n");
	printf("--------------------------------------\n");
	for(power=-10;power<=10;power++){
		result=pow(2,power);
		printf("%d\t%f\n",power,result);
	}
	
}
