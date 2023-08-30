#include<iostream>
using namespace std;

int x = 1;

int rint(int x){
    return x;
}

int main(){
    cout<<"x的值为："<<x<<"\tx的内存地址为："<<&x<<""<<endl;
    // int & b = r
    cout<<"rint(x)的值为："<<rint(x)<<"\trint(x)的内存地址为："<<&rint(x)<<endl;
}
