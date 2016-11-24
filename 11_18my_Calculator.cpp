#include<stdio.h>  
#include <stdlib.h>  
int main(int argc, char* argv [])  
{  
           int num1 = atoi(argv [2]);//此处利用atoi函数将指针数组类型转换为整型。  
           int num2 = atoi(argv [3]);  
           int ret;  
           if (argc != 4)//判断参数个数  
          {  
                   printf( "参数输入错误" );  
                    return 1;  
          }  
           if (argv [1][0] == '-')//第二个参数（字符串）判断  
          {  
                    switch (argv [1][1])  
                   {  
                    case 'a' :  
                             ret = num1 + num2;  
                             printf( "%d ", ret);  
                              break;  
                    case 's' :  
                             ret = num1 - num2;  
                             printf( "%d", ret);  
                              break;  
                    case 'm' :  
                             ret = num1*num2;  
                             printf( "%d", ret);  
                              break;  
                    default:  
                             printf( "第二个参数判断错误" );  
                              break;  
                   }  
          }  
           return 0;  
}  