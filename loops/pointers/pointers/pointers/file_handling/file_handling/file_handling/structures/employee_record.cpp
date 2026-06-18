#include<iostream>
using namespace std;

struct employee{
    int id;
    string name;
    float salary;
};

int main (){
    employee emp;

    emp.id = 1151813;
    emp.name = "Shumaima Khan";
    emp.salary = 100000000;

    cout<<"The id of employee is: "<<emp.id<<endl;
    cout<<"The name of employee is: "<<emp.name<<endl;
    cout<<"The salary of employee is: "<<emp.salary<<endl;

    return 0;
}
