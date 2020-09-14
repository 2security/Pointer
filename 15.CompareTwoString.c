#include<stdio.h>
int Mystrcmp(char *str1,char *str2)
	{
	while(*str1!='\0'&&*str2!='\0'&&*str1==*str2)
		{
		str1++;
		str2++;	
		}
		
	if(*str1==*str2)
		return 0;
	else 
		return (*str1-*str2);
	}
int main()
	{
	char str1[20],str2[20];
	printf("\n Enter the first string:: ");
	scanf("%s",str1);
	printf("\n Enter the second string:: ");
	scanf("%s",str2);
	
	if(Mystrcmp(str1,str2))
		printf("\n Two string is not same");
	else
		printf("\n Two string is same");
	
	return 0;
	}
