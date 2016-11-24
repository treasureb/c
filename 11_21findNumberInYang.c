#include<stdio.h>
#include<assert.h>
  
int find_Num(int *arr,int n)
{
    assert(arr);
    while(*arr <= 9)   //必须要判断<=9，否则会溢出
    {
        if(*arr == n)
        {
            return 1;
        }
        else
            arr++;
    }  
    return 0;
}
  
int main()
{  
    int n,m,i,j;
    int arr[3][3]={0};
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    scanf("%d",&n);
    m = find_Num(arr,n);
    if(m == 1)
    {
        printf("yes!\n");
    }
    else
    {
        printf("no!\n");
    }
    return 0;
}