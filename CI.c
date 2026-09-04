#include<stdio.h>
#include<math.h>
int main(){
	float p,r,n,t,ci;
	printf("enter the integers ");
	scanf("%f %f %f %f",&p,&r,&n,&t);
	ci=pow((p*(1+r/n)),n*t);
	printf("ci is %f",ci);
	return 0;

}
