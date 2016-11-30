#include<stdio.h>
#include<stdlib.h>

int my_cmp(const *a,const *b)
{
	return *a-*b;
}

int main()
{
	int i=0;
	int n=0;
	int *arr;
	arr=(float*)malloc(n*sizeof(float));
	printf("Please Enter Number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%f",arr+i);
	}
	qsort(arr,n,sizeof(float),my_cmp);
	for(i=0;i<n;i++)
	{
		printf("%1.f ",arr[i]);
	}
	return 0;
}


