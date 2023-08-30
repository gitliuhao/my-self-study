#include<iostream>
using namespace std;

int bigger(int x, int y){
    if(x>y) return x;
    else return y;
}

float bigger(float x, float y){
    if(x>y) return x;
    else return y;
}


double bigger(double x, double y){
    if(x>y) return x;
    else return y;
}

int main(){
    int a, b;
    a = 1;
    b = 2;
    int c = bigger(a, b);
    cout<<"c="<<c<<endl;
}