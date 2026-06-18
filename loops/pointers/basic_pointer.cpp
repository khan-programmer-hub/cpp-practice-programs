#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *p;

    p = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr: " << p << endl;
    cout << "Value pointed by ptr: " << *p << endl;

    return 0;
}
