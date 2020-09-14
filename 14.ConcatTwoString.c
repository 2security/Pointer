#include<stdio.h>

char *Mystrconcat(char *str1,char *str2)
	{
	while(*str1!='\0')
		str1++;
	while(*str2!='\0')
		{
			*str1=*str2;
			str1++;
			str2++;
		}
	str1='\0';
	return str1;
	}
int main()
	{
	char str1[20],str2[20];
	printf("\n Enter the first string:: ");
	gets(str1);
	printf("\n Enter the second string:: ");
	gets(str2);
	
	Mystrconcat(str1,str2);
	printf("\n After concatinating, the string is:: %s",str1);
	
	return 0;
	}
