#include <stdio.h>
#include <assert.h>

char *my_strcpy(char *dst,const char *src,int len)
{
	char *ret=dst;
	assert(dst);
	assert(src);	
	while(len--)	
	{
	 *dst++ = *src++;
	}
	if(*(dst-1) != '\0')
	*dst='\0';
	return ret;
}	

int main()
{
	int n=0;
	char *src="Hello,Bit";
	char dst[50]={0};
	printf("Please Enter Number:");
	scanf("%d",&n);  
    printf("%s\n",my_strcpy(dst,src,n));
	return 0;
}