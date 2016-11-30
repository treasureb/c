#include<stdio.h>
#include<assert.h>

void show(int arr[],int len)
{
	int i=0;
	assert(arr);
	for(;i<len;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int Cmp(void *x,void *y)
{
	int *_x=(int*)x;
	int *_y=(int*)y;
	return *_x-*_y;
}

void bubble_sort(void *data,int nums,int width,int (*cmp)(void*,void*))
{
	int i=0;
	assert(data);	
	for(;i<nums-1;i++)
	{
		int j=0;
		int count=0;
		char *start=(char*)data;
		for(;j<nums-1-i;j++)
		{
			if(cmp(start,start+width)>0)
			{
				int k=0;
				for(;k<width;k++)
				{
					start[k]^=start[k+width];
					start[k+width]^=start[k];
					start[k]^=start[k+width];
				}
					count=1;
			}
				start+=width;
		}	
			if(!count)
			{
				break;			
			}
	}
}

int main()
{
	int arr[10]={23,65,34,45,57,78,58,15,34,45};
	int len=sizeof(arr)/sizeof(arr[0]);
	show(arr,len);
	bubble_sort(arr,len,sizeof(int),Cmp);
	show(arr,len);
	return 0;
}