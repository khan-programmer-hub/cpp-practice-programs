#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    cout << "Array elements using pointer:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": " << *(ptr + i) << endl;
    }

    return 0;
}
