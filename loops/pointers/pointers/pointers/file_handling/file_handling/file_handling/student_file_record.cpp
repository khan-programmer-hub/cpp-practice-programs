#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s;
    Student *ptr = &s;

    cout << "Enter name: ";
    getline(cin, ptr->name);

    cout << "Enter age: ";
    cin >> ptr->age;

    ofstream out("student.txt");
    out << ptr->name << endl << ptr->age << endl;
    out.close();

    ifstream in("student.txt");

    string name;
    int age;

    getline(in, name);
    in >> age;

    in.close();

    cout << "\nData from file:\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}
