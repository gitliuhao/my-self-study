#include<iostream>
using namespace std;

int main(){
    int oneInt = 1;
    int & ref = oneInt;
    const int & refc = oneInt;
    ref = 2;
    cout <<"oneInt="<<oneInt<<","<<"ref="<<ref<<endl;
    cout <<"refc="<<refc<<endl;
    oneInt = 3;
    cout<<"ref="<<ref<<endl;
    cout<<"refc="<<refc<<endl;
    int & ref2 = ref;
    cout<<"ref2="<<ref2<<endl;
}