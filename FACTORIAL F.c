#include<stdio.h>
int factorial (int x);
int main (){
	int n,res;
	printf("enter a number ");
	scanf("%d",&n);
	res=factorial(n);
	printf("the factorial of %d is %d\n",n,res);
	return 0;
	
}
int factorial(int n){
	int i,fact=1;
	for(i=1;i<=n;i++)
	fact=fact*i;
	return fact;
}
