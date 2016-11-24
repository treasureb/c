#include <stdio.h>
#include <assert.h>

void *my_strcpy(void *dst,void *src,int len)
{
	char *ret=dst;
	assert(dst);
	assert(src);	
	while(len--)	
	{
	 *(char*)dst=*(char*)src;
	 dst=*(char*)dst+1;
	 src=*(char*)src+1;
	}
	*(char*)dst='\0';
	return ret;
}	

int main()
{
	int n=0;
	char *src="Hello,Bit";
	char dst[50]="0";
	printf("Please Enter Number:");
	scanf("%d",&n);  
    printf("%s\n",my_strcpy(dst,src,n));
	return 0;
}
