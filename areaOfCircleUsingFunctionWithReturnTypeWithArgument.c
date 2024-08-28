float area(float x){
	float result=3.14*x*x;
	return(result);
}
void main(){
	float r;
	printf("enter radius:");
	scanf("%f",&r);
	float k;
	k=area(r);
	printf("area of circle is %f",k);
}
