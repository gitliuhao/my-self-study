#include <iostream>
using namespace std;

int main(){
    int a =  10;
    const int *p = &a;
    const int ca = 30;
    int * q;
    cout<<"a的地址为：\t"<<&a<<"\ta 的值为：\t"<<a<<endl;
    cout<<"*p 指向的地址为："<<p<<"\t*p的值为: \t"<<*p<<endl;
    q = const_cast<int *>(p);
    *q = 20;
    cout<<"a 的地址为：\t"<<&a<<"\ta 的值为： \t"<<a<<endl;
    cout<<"*p 指向的地址为： "<<p<<"\t*p 的值为： \t"<<*p<<endl;
    cout<<"*q 指向的地址为： "<<q<<"\t*q 的值为： \t"<<*q<<endl;
    cout<<"分割线"<<endl;
    p = &ca;
    q = const_cast<int *>(p);
    * q = 40;
    cout<<"ca 的地址为：\t"<<&ca<<"\tca 的值为：\t"<<ca<<endl;
    cout<<"*p 指向的地址为：\t"<<p<<"\t *p的值为：\t"<<*p<<endl;
    cout<<"*q 指向的地址为：\t"<<q<<"\t *q的值为：\t"<<*q<<endl;
    return 0;
}