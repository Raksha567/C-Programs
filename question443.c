#include<stdio.h>
void main(){
	int i,j,p;
	for(i=3;i>=0;i--){
		p=i;
		for(j=1;j<=4-i;j++){
			printf("%d",p);
			p++;
		}
	printf("\n");	
	}
for(i=1;i<=3;i++){
	p=i;
	for(j=3;j>=i;j--){
		printf("%d",p);
		p++;
	}
	printf("\n");
}	
}
