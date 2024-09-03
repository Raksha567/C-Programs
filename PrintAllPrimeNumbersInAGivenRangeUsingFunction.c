#include<stdio.h>
int isPrime(int num){
	int j;
	if(num<=1){
		return -1;
	}
	
	
	for(j=2;j<num;j++){
		if(num%j==0){
			return -1;
		}
		
		}
		
	return num;
	

}
void main(){
	int n1,n2,i,number,s;
	printf("Enter n1 and n2:");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++){
		number=i;
		s=isPrime(number);
		if(s!=-1){
			printf("%d ",s);
		}
	}
}
