#include<stdio.h>
#include<assert.h>

char *my_strcat(char *dst,const char *src)
{
	char *ret=dst;
	assert(dst);
	assert(src);
	while(*dst != '\0')
	{
		 dst++;
    }
	while(*src != '\0')
	{
		 *dst++=*src++;
	}
	*dst='\0';
	return ret;
}

int main()
{
	char *src="Bit";
	char dst[50]="Hello";
	printf("%s\n",my_strcat(dst,src));
	return 0;
}