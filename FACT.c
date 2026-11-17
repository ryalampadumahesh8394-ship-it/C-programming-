#include <stdio.h>
int fact(int n);
int main(){
	int n,r;
	int *p=&n;
	printf("element");
	scanf("%d",p);
	r=fact(n);
	printf("%d",r);
	return 0;
}
int fact(int x){
	if(x==1)
	return 1;
	return x*fact(x-1);
}
