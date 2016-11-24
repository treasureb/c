#include<stdio.h>
#include<assert.h>

char *my_strcmp(char *dst,char *src)
{
	char *ret=dst;
	assert(dst);
	assert(src);
	while(*dst != '\0'&&*src != '\0')
	{
		if(*dst==*src)
		{
		 *dst++;
		 *src++;
		}
	
		else if(*dst>*src)
		{
			return 1;
		}
		else
		{
			return -1;
		}
	}
		if(*dst != '\0'&&*src == '\0')
		{
			return 1;
		}
		if(*dst == '\0'&&*src != '\0')
		{
			return -1;
		}
		
			return 0;
	
}

int main()
{
	char *dst="Hello,bit";
	char *src="Hello,bit";
	printf("%d\n",my_strcmp(dst,src));
	return 0;
}