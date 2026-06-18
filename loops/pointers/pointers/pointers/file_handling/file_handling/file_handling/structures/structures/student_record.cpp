#include<iostream>
using namespace std;

struct student{
    int rollno;
    string name;
    float marks;
};

int main() {
    student s1 = {1, "Shumaima Khan", 100};

    cout<<"The roll no is: "<<s1.rollno<<endl;
    cout<<"The name is: "<<s1.name<<endl;
    cout<<"The marks are: "<<s1.marks<<endl;

    return 0;
}
