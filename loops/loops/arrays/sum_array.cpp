#include <iostream>
using namespace std;

int main() {
    int num[5];
    int sum = 0;

    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < 5; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < 5; i++) {
        sum += num[i];
    }

    cout << "The sum of numbers is " << sum << endl;

    return 0;
}
