#include <stdio.h>  
#include <stdlib.h>  
#include <stdarg.h>  
  
void print(char * val, ...)                         //�ɱ�����б�  
{  
    char *c = NULL;  
    va_list arg;                                    //typedef char * va_list  
  
    va_start(arg, val);                             //��ȡ������ַ  
  
    while (*val != '\0') {                          //valָ��"val:ccc s"  
        if (*val == 'c') {  
            putchar(va_arg(arg, char));  
        }  
        else if (*val == 's') {  
            puts(va_arg(arg, char*));  
        }  
        else  
            putchar(*val);  
        ++val;  
    }  
    va_end(arg);  
}  
  
int main()  
{  
    print("val:ccc s", 'a', 'b', 'c', "hello");  
  
    system("pause");  
    return 0;  
}  