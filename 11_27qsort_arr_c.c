#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

#pragma warning(disable:4996)

static void stringShow(char* arr[],int len)
{
	int i=0;
	for(;i<len;i++)
	{
		printf("%s\n",arr[i]);
	}
	printf("\n");
}
	static void stringCmp(void *x,void *y)
	{
		char *p=(char *)x;
		char *q=(char *)y;
		int m=strlen(p);
		int n=strlen(q);
		if(m!=n)
		{
			return (*p-*q);
		}
		else
		{
		return strcmp(*((char **)x),*((char **)y));
		}
}

void stringSort(char *arr[],int len)
{
	assert(arr);
	qsort(arr,len,sizeof(char *),stringCmp);
}


int main()
{
	char *arr[]={"hello","Cprogram","learn"};
	int len=sizeof(arr)/sizeof(arr[0]);
	stringShow(arr,len);
	stringSort(arr,len);
	stringShow(arr,len);
	return 0;
}

