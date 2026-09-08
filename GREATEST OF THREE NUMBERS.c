#include<stdio.h>
int main (){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	((a>b) && (a>c))?printf("a is greater"):((b>a)&&(b>c)?printf("b is greater"):printf("c is greater"));
	return 0;
}
