#include<iostream>
using namespace std;

int main(){
#if 0
    int a = 0x1234;
    char b = *(char*)&a;
    if(b == 0x12){
        cout<<"大端机器"<<endl;
    }else{
        cout<<"小端机器"<<endl;
    }

#endif 

    /* 利用连接体从低地址开始存放的特性 */

#if 1
    union test{
        int a;
        char b;
    };
    union test t;
    t.a = 0x1234;
    if(t.b == 0x12){
        cout<<"大端机器"<<endl;
    }else{
        cout<<"小端机器"<<endl;
    }
#endif
    return 0;
}
