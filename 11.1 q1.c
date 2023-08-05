#include<stdio.h>

void main()
{
	int n,i;
	
	printf("Enter the array size : ");
	scanf("%d",&n);
	
	int a[n];
	int *p[n];
	
	for(i=0;i<n;i++)
	{
	printf("Enter array's elements : ");
	scanf("%d",&a[i]);
    }
    
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
		
	}
	
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
	}
	
	printf("Square of each elements: \n");
	
	for(i=0;i<n;i++)
    {
	   *p[i] = (*p[i]) * (*p[i]);
		printf("a[%d]=%d\n",i,*p[i]);

    }
	
	
}
