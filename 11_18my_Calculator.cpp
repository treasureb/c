#include<stdio.h>  
#include <stdlib.h>  
int main(int argc, char* argv [])  
{  
           int num1 = atoi(argv [2]);//�˴�����atoi������ָ����������ת��Ϊ���͡�  
           int num2 = atoi(argv [3]);  
           int ret;  
           if (argc != 4)//�жϲ�������  
          {  
                   printf( "�����������" );  
                    return 1;  
          }  
           if (argv [1][0] == '-')//�ڶ����������ַ������ж�  
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
                             printf( "�ڶ��������жϴ���" );  
                              break;  
                   }  
          }  
           return 0;  
}  