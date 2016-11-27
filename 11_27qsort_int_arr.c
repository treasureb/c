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
	arr=(int*)malloc(n*sizeof(int));
	printf("Please Enter Number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(arr+i));
	}
	qsort(arr,n,sizeof(int),my_cmp);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

int comp(const void*a,const void*b)
{
return *(int*)b-*(int*)a;
}
