#include<iostream>
using namespace std;

int main(){
    const int x = 5, y = 6;
    const int * p = &x;

    p = &y;
    int a;
    cin>>a;
    // int a = *p;
    // int a = const_cast<int *>(p);
    cout<<*p<<endl;
    // *p = const_cast< int >(y);

}