#include<stdio.h>

int my_pwd(int x,int n)
{
	if(n==1)
	{
	   return x;
	}
	else
	{
        int	temp=my_pwd(x,n-1);
		return (x*temp);
	}
}

int main()
{
	int x=0;
	int n=0;
	printf("Please Enter Base and Power:");
	scanf("%d%d",&x,&n);
	printf("%d\n",my_pwd(x,n));
	return 0;
}