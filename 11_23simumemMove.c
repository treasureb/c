#include<stdio.h>
#include<assert.h>

void *my_memMove(void *dst,void *src,int len)
{
	char *_dst=(char*)dst;
	char *_src=(char*)src;
	char *ret =_dst;
	if(_dst>_src&&_dst+len>_src)
	{
		char *_dst_end=_dst+len-1 ;
		char *_src_end=_src+len-1;
		while(len--)
		{
			*_dst_end=*_src_end;
			_dst_end--,_src_end--;
		}
	}
	 else
	{
		while(len--)
		{
			*_dst=*_src;
			_dst++,_src++;
		}
	
	 }
	return ret;
}

int main()
{
	int n=0;
	char src[20]="Hello,Bit";
	char dst[20];
	printf("Please Enter Number:");
	scanf("%d",&n);  
	my_memMove(src+1,src,strlen(src)+1);
	printf("%s\n",src);
	return 0;
}