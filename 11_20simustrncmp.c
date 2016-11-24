#include<stdio.h>
#include<assert.h>

char *my_strcmp(const char *dst,const char *src,int len)
{
	char *ret=dst;
	assert(dst);
	assert(src);
	while(len--)
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
	int n=0;
	char *dst="Hello,bit";
	char *src="Hello,bit";
	printf("Please Enter Number:");
	scanf("%d",&n);
	printf("%d\n",my_strcmp(dst,src,n));
	return 0;
}