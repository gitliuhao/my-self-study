#include<iostream>
using namespace std;

void func(){
    int a = 1;
    int & c = a;
    int b = 1;
    int * ai = &a;

    cout<<"a的值为："<<a<<"\ta的内存地址为："<<ai<<"\t"<<endl;
    cout<<"c的值为："<<c<<"\tc的内存地址为："<<&c<<"\t"<<endl;
    cout<<"b的值为："<<b<<"\tb的内存地址为："<<&b<<"\t"<<endl;

    cout<<"ai指向的值为："<<* ai<<"\tai指针的值为："<<ai<<"\tai指针的地址为:"<<& ai<<endl;
}

int main(){
    func();
}