#include<stdio.h>
void main(){
	int a=2,*p1;
	 p1=&a;
	 printf("%d\n",a);
	 printf("%d\n",&a);
	 printf("%d\n",*&a);
	 printf("%d\n",p1);
	 printf("%d\n",&p1);
	 printf("%d\n",*p1);
	
}
