#include<stdio.h>
#include<assert.h>

void *my_MemMove(void *dst,void *src,int len)
{
	void *ret=dst;
	assert(dst);
	assert(src);
	if(NULL==dst||NULL==src)
	{
		return dst;
	}
	while(len--)
	{
		*(char *)dst=*(char *)src;
		 dst=(char*)dst+1;
		 src=(char*)src+1;
	}
	return ret;
}

int main()
{
	int n=0;
	char* src="Hello,Bit";
	char dst[20]="0";
	printf("Please Enter Number:");
	scanf("%d",&n);
	printf("%s\n",my_MemMove(dst,src,n));
}