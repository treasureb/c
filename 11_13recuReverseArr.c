#include<stdio.h>
#include<string.h>
void my_reserve(char *str)
{
	int len=strlen(str);
	if(len<=1)
	{
		return;
	}
	 else
	{
	    char temp=str[0];
	    str[0]=str[len-1];
	    str[len-1]='\0';
	    my_reserve(str+1);
	    str[len-1]=temp;
	}
}
int main()
{
	char arr[]="abcde";
	my_reserve(arr);
	printf("%s",arr);
	return 0;
}