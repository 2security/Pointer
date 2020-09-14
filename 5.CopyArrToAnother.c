#include<stdio.h>
#include<string.h>
char * Mystrcpy(char *str1,char *str2)
	{
	while(*str2)
		{
			*str1=*str2;
			str2++;
			str1++;
		}
	*str1='\0';
	return str1;
	}
int main()
	{
		int i,n;
		char str1[30],str2[50];
		printf("\n Enter the string1:: ");
		scanf("%s",str1);
		
		printf("\n Enter the string2:: ");
		scanf("%s",str2);
		
		printf("\n After Copied::");
		Mystrcpy(str1,str2);
		
		printf("%s",str1);
		return 0;
	}
