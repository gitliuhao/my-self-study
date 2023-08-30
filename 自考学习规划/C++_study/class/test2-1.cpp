#include<iostream>
using namespace std;

class myDate{
    public:
        myDate();
        myDate(int, int , int);
        void setDate(int, int, int);
        void setDate(myDate);
        myDate getDate();
        void setYear(int);
        int getMonth();
        void printDate() const;

    private:
        int year, month, day;
};

myDate::myDate(){
    year = 1970, month = 1, day = 1;

}

myDate::myDate(int y, int m, int d){
    year = y, month = m, day = d;

}

void myDate::setDate(myDate oneD){
    year = oneD.year, month = oneD.month, day = oneD.day;
    return;
}


myDate myDate::getDate(){
    return *this;
}

void myDate::setYear(int y){
    year = y;
    return;
}

int myDate::getMonth(){
    return month;
}

void myDate::printDate() const
{
    cout << year <<"/"<< month <<"/"<< day;
    return;
}


class Student{
    public:
        void setStudent(string, myDate);
        void setName(string);
        string getName();
        void setBirthday(myDate);
        myDate getBirthday();
        void printStudent() const;

    private:
        string name;
        myDate birthday;

};

void Student::setStudent(string s, myDate d){
    name = s;
    birthday.setDate(d);
    return;
}

void Student::setName(string n){
    name = n;
}

string Student::getName(){
    return name;
}

void Student::setBirthday(myDate d){
    birthday.setDate(d);
    return;
}
myDate Student::getBirthday(){
    return birthday;
}

void Student::printStudent() const{
    cout<<"姓名："<<name<<"\t 生日：";
    birthday.printDate();
    cout<<endl;
}

int main(){
    // Student ss;
    // int y, m, d;
    // string name_;
    // cout<<"请输入学生的姓名和生日， 生日以\"年 月 日\" 的次序输入：";
    // cin>>name_>>y>>m>>d;
    // ss.setStudent(name_, myDate(y, m, d));
    // ss.printStudent();
    // return 0;

    // 使用指针访问对象的成员
    // Student ss;
    // int y,m,d;
    // string name_;
    // Student *sp = &ss;

    // cout<<"请输入学生的姓名和生日， 生日以\"年 月 日\" 的次序输入：";
    // cin>>name_>>y>>m>>d;
    // sp->setStudent(name_, myDate(y, m, d));
    // sp->printStudent();
    // return 0;

    // 使用引用访问对象的成员
    Student ss;
    int y, m, d;
    string name_;
    Student &sy = ss;
    cout<<"请输入学生的姓名和生日， 生日以\"年 月 日\" 的次序输入：";
    cin>>name_>>y>>m>>d;
    sy.setStudent(name_, myDate(y,m,d));
    sy.printStudent();
    return 0;
}