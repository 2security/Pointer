#include<stdio.h>

char *Mycopy(char *str,char *str1)
	{
	int i=0;
	while(*(str+i)!='\0')
		{
		*(str1+i)=*(str+i);
		i++;
		}
	return str1;
	}
int main()
	{
		int i,n;
		char str[100],str1[100];
		printf("\n Enter the string: ");
		gets(str);
		
		printf("\n Original string: ");
		puts(str);
			
		printf("\n Copied string: ");
		puts(Mycopy(str1,str));
		return 0;
	}
