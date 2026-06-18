#include<iostream>
using namespace std;

class person{
public:
    string name;
};

class student : public person{
public:
    int rollno;
};

class teacher : public person{
public:
    string subject;
};

int main(){

    student s;
    teacher t;

    s.name = "Shumaima";
    s.rollno = 12;

    t.name = "Khadija";
    t.subject = "Islamic Studies";

    cout<<"-----Student Information-----"<<endl;
    cout<<"Student Name: "<<s.name<<endl;
    cout<<"Roll Number: "<<s.rollno<<endl;

    cout<<"-----Teacher Information-----"<<endl;
    cout<<"Teacher Name: "<<t.name<<endl;
    cout<<"Subject: "<<t.subject<<endl;

    return 0;
}
