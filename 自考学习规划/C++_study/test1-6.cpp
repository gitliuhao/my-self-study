#include<iostream>
using namespace std;

void SwapValue(int a, int b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;

    cout<<"tmp的内存地址："<<&tmp<<endl;
    cout<<"a的内存地址："<<&a<<endl;
    cout<<"b的内存地址："<<&b<<endl;
    cout<<"在 SwapValue()函数中：\t\ta = "<<a<<", b = "<<b<<endl;
    return;
}

void SwapRef(int & a, int & b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;

    cout<<"tmp的内存地址："<<&tmp<<endl;
    cout<<"a的内存地址："<<&a<<endl;
    cout<<"b的内存地址："<<&b<<endl;

    cout <<"在 SwapRef()函数中：\ta = "<<a<<", b = "<<b<<endl;
    return;

}

int main(){
    int a = 10, b = 20;
    cout<<"数据交换前:\t\ta = "<<a<<", b = "<<endl;

    cout<<"a的内存地址："<<&a<<endl;
    cout<<"b的内存地址："<<&b<<endl;
    SwapValue(a,b);

    cout<<"调用SwapVal()后：\t\ta = "<<a<<", b = "<<b<<endl;


    a = 10;
    b = 20;
    cout<<"a的内存地址："<<&a<<endl;
    cout<<"b的内存地址："<<&b<<endl;
    SwapRef(a, b);
    cout<<"调用 SwapRef()后：\t\ta"<<a<<", b = "<<b<<endl;
    return 0;
}
