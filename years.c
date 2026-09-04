#include<stdio.h>
int main (){
	int a,b,c,d;
	scanf("%d",&a);
	b=a/365;
	c=(a%365)/7;
	d=(a%365)%7;
	printf("years b=%d weeks c=%d days d=%d",b,c,d);
	return 0;
}
