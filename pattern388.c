#include<stdio.h>
void main(){
	int i,space,j;
	for(i=1;i<=4;i++){
		for(space=1;space<=4-i;space++){
			printf(" ");
		}
		for(j=i;j>1;j--){
			printf("%c",j+'A'-1);
		}
		for(j=1;j<=i;j++){
			printf("%c",j+'A'-1);
		}
		printf("\n");
	}
}
