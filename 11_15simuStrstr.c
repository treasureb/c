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
        s = s1;  //��str1����ʼλ������һ�ε���ʼλ������1
        while(*s1 && *s2 && *s1 == *s2)  //��ƥ�䣬�Ժ�ÿ�αȽ�ʱ��str2������Ԫ�ؿ�ʼ
        {
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        {
            return (char*)s;
        }
        s1=s+1;//��ƥ�䣬str1����һ�ε���ʼλ������1
		s2=str2;
    }
    return NULL;  //���������û���ҵ������ؿ�
}
  
int main()
{
    char *str1 = "abbbcdef";
    char *str2 = "def";
    char *ret = my_strstr(str1,str2);
    printf("%s\n",ret);
    return 0;
}