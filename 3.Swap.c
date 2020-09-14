#include<stdio.h>
void swap(int *m,int *n)
	{
	int temp;
	temp=*m;
	*m=*n;
	*n=temp;
	}
int main()
	{
		int n,m;
		
		printf("\n Enter two number:: ");
		scanf("%d%d",&m,&n);
		
		printf("Before swap: ");
		printf("m=%d n=%d\n",m,n);
		
		swap(&m,&n);
		
		printf("After swap: ");
		printf("m=%d n=%d\n",m,n);
		
		return 0;
	}
