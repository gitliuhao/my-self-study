#include<iostream>
using namespace std;


class myDate{
    public:
        int year;
        int month;
        int day;
        myDate();
        ~myDate();
        void printDate() const;
};

void myDate::printDate() const
{
    cout << year <<"/"<< month <<"/"<< day;
    return;
}


myDate::myDate(){
    year=1970, month=1, day=1;
    cout<<"myDate构造函数1"<<endl;
}

myDate::~myDate(){
    cout<<"myDate析构函数"<<endl;
}



class Student{
    public:
        // void setStudent(string, myDate);
        // void setName(string);
        // string getName();
        // void setBirthday(myDate);
        // myDate getBirthday();
        void printStudent() const;
        Student();
        Student( const Student &s);
        ~Student();
    private:
        string name;
        myDate birthday;

};

void Student::printStudent() const{
    cout<<"姓名："<<name<<"\t 生日：";
    birthday.printDate();
    cout<<endl;
}

Student::Student():name("Noname"),birthday(myDate()){
    cout<<"Student构造函数0"<<endl;
}

Student::Student(const Student &s){
    name = "copy" + s.name;
    birthday = s.birthday;
    cout<<"Student复制构造函数"<<endl;
}

Student::~Student(){
    cout<<"Student析构函数"<<endl;
}


int main(){
    Student stud;
    stud.printStudent();
    Student sy[2] = {Student(), stud};
    for(int i=0; i<2; i++){
        sy[i].printStudent();
    }
    return 0;

}