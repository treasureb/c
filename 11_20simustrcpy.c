#include <stdio.h>
#include <assert.h>

char *my_strcpy(char *dst,const char *src)
{
	char *ret=dst;
	assert(dst);
	assert(src);	
	while(*dst++ = *src++)	
	{
	;
	}
	return ret;
}	

int main()
{
    char *src="Hello,Bit";
	char dst[50]={0};
    printf("%s\n",my_strcpy(dst,src));
	return 0;
}