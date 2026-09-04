#include<stdio.h>
int main (){
	float t,b,s;
	scanf("%f %f",&b,&s);
	t=s+0.001*b*s;
	printf("total salary=%f",t);
	return 0;
}
