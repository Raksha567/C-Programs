#include<stdio.h>
void main(){
int a[5],b[5],new[2],i;
printf("Enter elements of first array:");
for(i=0;i<5;i++){
	scanf("%d",&a[i]);
}
printf("Enter elements of second array:");
for(i=0;i<5;i++){
	scanf("%d",&b[i]);
}
new[0]=a[2];
new[1]=b[2];
printf("New array:");
for(i=0;i<2;i++){
	printf("%d ",new[i]);
}
}
