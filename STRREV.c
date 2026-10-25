#include<stdio.h>
#include<string.h>
int main (){
	char st1[10],st2[10];
	gets(st1);
	strrev(st1);
	printf("the reverse string is %s",st1);
	return 0;
}
