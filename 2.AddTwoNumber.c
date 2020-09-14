#include<stdio.h>
int main()
	{
		int *ptr1,*ptr2,n,m;
		
		printf("\n Enter two number:: ");
		scanf("%d%d",&m,&n);
		
		ptr1=&m;
		ptr2=&n;
		
		printf("\n Sum of %d %d is:: %d",*ptr1,*ptr2,*ptr1+*ptr2);
		
		return 0;
		
	}
