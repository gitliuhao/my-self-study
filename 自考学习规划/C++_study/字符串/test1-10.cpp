#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string s1 = "C++语言";
    string s2 = "程序设计";
    string s3 = s1 + s2;
    string s4;
    s4 = s1.append(s2);
    if(s3 == s4) cout<<"结果相同"<<endl;
    else cout<<"结果不相同"<<endl;
    int * a[20];
    int size = s1.size();
    int length = s1.length();
    cout<<"size = "<<size<<"    ,length = "<<length<<endl;
    s1[0] = 'J';
    cout<<"s1 = "<<s1<<", s2 = "<<s2<<endl;

    cout<<"string s5 = s1.substr(3,8);"<<endl;
    string s5 = s1.substr(3,4);
    cout<<"s5 = "<<s5<<", s5.c_str = "<<s5.c_str()<<endl;

    cout<<"s1 = "<<s1<<", s2 = "<<s2<<endl;

    char str[20];
    strcpy(str, s5.c_str());
    cout<<"str = "<<str<<endl;
    cout<<"s5 = "<<s5<<endl;
    s1.swap(s2);
    cout<<"s1 = "<<s1<<", s2 = "<<s2<<endl;
    cout<<"str = "<<str<<endl;
    cout<<"s2 = "<<s2<<endl;
    cout<<s2.find(str)<<endl;
    return 0;
}