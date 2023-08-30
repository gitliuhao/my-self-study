#include<iostream>
using namespace std;

int main(){
    int oneInt = 1;
    int & ref = oneInt;
    ref = 2;
    cout<<"oneInt =  "<<oneInt<<", "<<"ref = "<<ref<<endl;
    int *p = &ref;
    *p = 3;
    cout<<"ref = "<<ref<<", "<<"p 的地址："<<p<<", p 的值: "<<*p<<endl;
}