#pragma once

#include<stdio.h>
#include<assert.h>

/* memcpy内存拷贝函数 */
void *memcpy(void *dst,const void* src,size_t length){
    void* ret = dst;    //void* 表示可以接受无类型的指针
    char* pdest = (char*) dst;
    char* psrc  = (char*) src;
    assert(dst);
    assert(src);
    while(length--){
        *pdest++ = *psrc++;
    }

    return ret;
}

/* memmove可以解决内存重叠问题 */
void* memmove(void* dest,const void* src,size_t length){
    void* tmp = dest;
    char* pdst = (char*)dest;
    char* psrc = (char*)src;
    assert(dest);
    assert(src);
    if(pdst > psrc){//从后往前 空间减少 直到为0
        while(length--)
            *(pdst+length) = *(psrc+length);
    }else{//从前拷贝
        while(length--){
            *pdst++ = *psrc++;
        }
    }

    return tmp;
}

/* memset内存设置函数 */
void* memset(void* dest,int c,size_t length){
    void* tmp = dest;
    char* pdst = (char*)dest;
    assert(dest);
    for(size_t i = 0;i < length;++i){
        *(pdst+i) = c;
    }

    return tmp;
}
