#include<stdio.h>

int Mystrlen(char *str)
	{
	int i;
	for(i=0;i<*(str+i)!='\0';i++);
	
	return i;		
	}

int main()
	{
	int n;
	char str[100];
	printf("\n Enter the string");
	gets(str);
	
	n=Mystrlen(str);
	
	printf("\n Length of %s is::%d",str,n);
	return 0;
	}	

