#include <stdio.h>
 
void main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int i = 0;
    int j = 10;
    while (i < j)
    {
  
        if (0 == a[i] % 2 && 1 == a[j] % 2)  //如果数组左边是偶数，右边是奇数
		{                
            a[i] = a[i] ^ a[j]; 
            a[j] = a[i] ^ a[j]; 
            a[i] = a[i] ^ a[j];
            i++;
            j--;
            continue;
        }
        if (1 == a[i] % 2)    
        {
            i++;
        }
  
        if (0 == a[j] % 2)
        {
            j--;
        }
    }
  
    for (i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
