#include <stdio.h>

void sort(int *p,int n);
int main()
{
	int a[100],i,n;
	printf("enter array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,n);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
void sort(int *p,int n)
{
	int min,i,j,temp;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=1;j<n;j++){
			if(*(p+min)>*(p+j))
			min=j;
		}
		if(i!=min){
			temp=*(p+i);
			*(p+i)=*(p+min);
			*(p+min)=temp;
			
		}
	}
}

