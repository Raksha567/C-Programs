#include <stdio.h>
void main(){
	int a=-1;int b=1;int n;int i;
	printf("Enter a range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		int c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
		
	}
	
	
}
