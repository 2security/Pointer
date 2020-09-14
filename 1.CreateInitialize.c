#include<stdio.h>
int main()
	{
		int *ptr,n;
		
		printf("\n Enter a number:: ");
		scanf("%d",&n);
		
		ptr=&n;
		
		printf("\n The value of ptr::%u",ptr);
		printf("\n The address of ptr::%u",&ptr);
		printf("\n The value pointed by ptr::%d",*ptr);
		
		return 0;
		
	}
