#include<stdio.h>
#include<string.h>

char* my_rot(char *arr,int len,int n)
{
	int i=0;	
	while(n)
	{   
		char temp=arr[0];
		for(i=0;i<len-1;i++)
		{
			arr[i]=arr[i+1];
		}
		  arr[len-1]=temp;
          n--;       	
 	}
	 return arr;
}
int main()
{
	char* ter = NULL;
	char arr[]="abcd";
	int len=strlen(arr);
	int n;
	printf("请输出左旋的位数：\n");
	scanf("%d",&n);
	ter = my_rot(arr,len,n);
	printf("%s",ter);
	return 0;	
}