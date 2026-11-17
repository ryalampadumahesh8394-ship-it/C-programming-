#include <stdio.h>
int main()
{
	int *p,n,a[20],temp,i,j;
	printf("size");
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		
		for(j=1;j<n-i-1;j++)
		{
	    	if(*(p+j)>*(p+j+1)){
			
	    	temp=*(p+j);
		    *(p+j)=*(p+j+1);
		    *(p+j+1)=temp;
            
           }

		}
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d",*(p+i));
	return 0;
}
