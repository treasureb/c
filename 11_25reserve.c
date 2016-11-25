#include <stdio.h>
#include <string.h>
#include <assert.h>
void reverse_str(char* left,char* right)
{
    assert(left);
    assert(right);
    while (left<right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

char* reverse(char str[])
{
    int len = strlen(str);
    char *start = str;
    char *end = NULL;
    char *ret = str;
    reverse_str(str,str+len-1);
    while (*str)
    {
        start = str;
        while ((*str != ' ') && (*str != '\0'))
        {
            str++;
        }
        end = str - 1;
        reverse_str(start,end);
        if (*str == ' ')
            str++;
    }
    return ret;
}
int main()
{
    char str[] = "student a am i";
    printf("%s\n", reverse(str));
    return 0;
}