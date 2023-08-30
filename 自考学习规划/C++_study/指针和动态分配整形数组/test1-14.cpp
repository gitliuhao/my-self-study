#include<iostream>
#include<string>
using namespace std;

int main(){
    int * pArray;
    int i = 5;
    pArray = new int[i*20];
    pArray[0] = 20;
    pArray[99] = 30;
    cout<<"pArray 的地址为："<<pArray<<endl;
    cout<<"pArray[0] 的地址为："<<&(pArray[0])<<endl;
    cout<<"pArray 的地址为："<<&pArray<<endl;

    string str1;
    string city = "Beijing";
    string str2 = city;
    cout<<"str1 = "<<str1<<"."<<endl;
    cout<<city<<","<<str2<<endl;
    char name[] = "C++程序";
    string s1 = name;
    string citys[] = {"Beijing", "Shanghai", "Tianjin", "Chongqing"};
    cout<<citys[1]<<endl;
    cout<<sizeof(citys)/sizeof(string)<<endl;
}
