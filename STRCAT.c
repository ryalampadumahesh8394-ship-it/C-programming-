#include<stdio.h>
#include<string.h>
int main (){
	char st1[10],st2[10];
	scanf("%s",st1);
	scanf("%s",st2);
	strcat(st2,st1);
	printf("%s",st2);
	return 0;
	
}
