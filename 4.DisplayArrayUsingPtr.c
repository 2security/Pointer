#include<stdio.h>
#include<malloc.h>
void Display(int *a,int n)
	{
		int i;
		printf("\n Entered array elements are::");
		for(i=0;i<n;i++)
			printf("%d ",*(a+i));
	}
int main()
	{
		int *a,n,i;
		
		printf("\n Enter size of array:: ");
		scanf("%d",&n);
		
		a=(int *)malloc(n*sizeof(int *));
		
		printf("\n Enter %d elements::",n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		
		Display(a,n);
		
		return 0;
	}
