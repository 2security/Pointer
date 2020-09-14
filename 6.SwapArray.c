#include<stdio.h>
#include<malloc.h>
void Display(int *a,int n)
	{
		int i;
		for(i=0;i<n;i++)
			printf("%d ",*(a+i));
	}
void swap(int *a,int m,int *b,int n)
	{
		int i,j,*temp;
		for(i=0;i<n;i++)
			*(temp+i)=*(b+i);
			
		for(i=0;i<m;i++)
			*(b+i)=*(a+i);
			
		for(i=0;i<n;i++)
			*(a+i)=*(temp+i);
	}
int main()
	{
		int *a,*b,n,m,i;
		
		printf("\n Enter size of array1:: ");
		scanf("%d",&m);
		
		printf("\n Enter size of array2:: ");
		scanf("%d",&n);
		
		a=(int *)malloc(m*sizeof(int *));
		b=(int *)malloc(n*sizeof(int *));
		
		printf("\n Enter %d elements of array1::",m);
		for(i=0;i<m;i++)
			scanf("%d",&a[i]);
			
		printf("\n Enter %d elements of array2::",n);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
			
		printf("\n Before Swap");
		printf("\n Array1:");
		Display(a,m);
		
		printf("\n Array2:");
		Display(b,n);
	
		swap(a,m,b,n);  
		
		printf("\n After Swap");
		printf("\n Array1:");
		Display(a,n);
		
		printf("\n Array2:");
		Display(b,m);
		
		return 0;
	}
