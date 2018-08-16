#pragma once

#include<stdio.h>
#include<assert.h>

/* 非递归实现strlen */
size_t strlen(const char* str){
    assert(str);
    size_t len = 0;;
    while(*str++ != '\0')
        len++;

    return len;
}

/* 递归实现strlen */
size_t strlen_r(const char* str){
    assert(str);
    return *str == '\0'? 0:strlen_r(str+1) + 1;
}


/* 非递归实现strcpy */
char* strcpy(char* dst,const char* src){
    assert(dst &7 src);
    char* tmp = dst;
    while((*tmp++ = *src) != '\0');
    *tmp = '\0';

    return dst;
}

/* 非递归实现strncpy */
char* strncpy(char* dst,const char* src,size_t lenth){
    assert(dst && src);
    char* tmp = dst;
    while(lenth--){
        if((*tmp++ = *src) != '\0')
            src++;;
    }
    *tmp = '\0';

    return dst;
}

/* 非递归实现strcat */
char* strcat(char* dst,const char* src){
    assert(dst && src);
    char* tmp = dst;
    while(*tmp)
        tmp++;

    while((*tmp++ = *src++) != '\0');
    return dst;
}

/* strncat */
char* strncat(char* dst,const char* src,size_t lenth){
    assert(dst && src);
    char* tmp = dst;
    while(*tmp)
        ++tmp;

    while(lenth-- && (*tmp++ = *src++));
    *tmp = '\0';

    return dst;
}

/* strcmp */
int strcmp(const char* str1,const char* str2){
    assert(str1 && str2);
    while(*str1 == *str2 && *str2){
        str1++;
        str2++;
    }

    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

/* strncmp */
int strncmp(const char* str1,const char* str2,size_t length){
    assert(str1 && str2);
    while(length-- && *str2){
        if(*str1 != *str2)
            return *(unsigned char*)str1 - *(unsigned char*)str2;
        str1 ++;
        str2 ++;
    }

    return 0;
}
