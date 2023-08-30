#include<iostream>
using namespace std;

void func(int a=11, int b=22, int c=33){
    cout<<"a="<<a<<", b="<<b<<", c="<<c<<endl;
}

int main(){
    func();
    func(12);
    func(15, 13);
    func(399, 345, 384);
}
