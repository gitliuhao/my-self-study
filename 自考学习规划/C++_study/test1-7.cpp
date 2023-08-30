#include<iostream>
using namespace std;

int oneX = 10;
int oneY = 20;

int & refValue(int x){
    return x;
}

int main(){
    cout<<"oneX = "<<oneX<<"oneX address is :"<<&oneX<<endl;
    refValue(oneX) = 30;
    cout<<"oneX = "<<oneX<<"oneX address is :"<<&oneX<<endl;

}