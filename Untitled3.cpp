#include<stdio.h>
int main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	if(c>65 && c<92)
	{
		printf("upper case");
	}
	else if(c>97&&c<122)
	{
		printf("lower case");
	}
	else if(c>488 && c<57)
	{
		printf("digit");
	}
}
