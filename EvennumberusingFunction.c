#include<stdio.h>
int isEven(int num){
	if(num%2==0){
	return num;	
	}else{
		return -1;
	}
}
	
void main(){
	int n1,n2,i,number,s;
	printf("Enter n1 and n2:");
	scanf("%d \n%d",&n1,&n2);
	for(i=n1;i<=n2;i++){
		number=i;
	s=	isEven(number);
	if(s!=-1){
	printf("%d ",s);
	}
}
}
