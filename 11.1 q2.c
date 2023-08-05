#include<stdio.h>

void main()
{
	int x,y;
	
	printf("Enter the value of x : ");
	scanf("%d",&x);
	
	printf("Enter the value of y : ");
	scanf("%d",&y);
	
	int *a,*b,c;
	
	a = &x;
	b = &y;
		
     c = *b;
    *b = *a;
	*a = c;

	printf("Before swapping :\n x = %d\n y = %d\n",y,x);
	
	printf("After swapping :\n x = %d\n y = %d\n",x,y);
	
}
