#include<stdio.h>
#include<assert.h>

void select_sort(int src[],int len)
{
	int i=0;
	int j=0;
	int k=0;
	int temp;
	assert(src);
	for(i=0;i<len;i++)
	{
		k=i;//记录i为当前最小元素的下标
		for(j=i+1;j<len;j++)
		{
			if(src[j]<src[k])
			{	
				k=j;//发现比当前最小元素还要小的元素则重新更新最小值的下标
				if(k != i)
				{
				 temp=src[k];
				 src[k]=src[i];
				 src[i]=temp;
				}
			}
		}
	}
}

int main()
{
	int i;
	int src[]={5,43,54,23,57,6,3,2,64,65};
	int len=sizeof(src)/sizeof(src[0]);	
	select_sort(src,len);
		for(i=0;i<len;i++)
	{
	
		printf("%d ",src[i]);
	}
		printf("\n");
	return 0;
}