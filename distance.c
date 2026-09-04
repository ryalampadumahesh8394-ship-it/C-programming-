#include<stdio.h>
#include<math.h>
int main (){
	float x,X,y,Y,a,b,c;
	printf("enter the values ");
	scanf("%f %f %f %f",&x,&y,&X,&Y);
	a=pow(x-X,2);
	b=pow(y-Y,2);
	c=sqrt(a+b);
	printf("distance is %f",c);
	return 0;
}
