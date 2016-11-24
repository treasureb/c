#include<stdio.h>
#include<assert.h>

char *my_strncat(char *dst,char *src,int n)
{
	char *ret=dst;
	assert(dst);
	assert(src);
	while(*dst != '\0')
	{
		dst++;
	}
	while(n--)
	{
		*dst++=*src++;
	}
	if(*(dst-1) != '\0')
		*dst='\0';
	return ret;
}

int main()
{
	int n=0;
	char *src="Bit";
	char dst[50]="Hello,";
	printf("Please Enter Number:");
	scanf("%d",&n);
	printf("%s\n",my_strncat(dst,src,n));
	return 0;
}
