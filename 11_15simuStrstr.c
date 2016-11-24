#include <stdio.h>
#include <assert.h>
  
char *my_strstr(const char *str1,const char *str2)
{
   const char *s =NULL ; 
   const char *s1 = str1;   
   const char *s2 = str2; 
    assert(str1);
	assert(str2);
    while(*str1)
    {
        s = s1;  //将str1的起始位置由上一次的起始位置向后加1
        while(*s1 && *s2 && *s1 == *s2)  //不匹配，以后每次比较时，str2都从首元素开始
        {
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        {
            return (char*)s;
        }
        s1=s+1;//不匹配，str1由上一次的起始位置向后加1
		s2=str2;
    }
    return NULL;  //整体遍历完没有找到，返回空
}
  
int main()
{
    char *str1 = "abbbcdef";
    char *str2 = "def";
    char *ret = my_strstr(str1,str2);
    printf("%s\n",ret);
    return 0;
}