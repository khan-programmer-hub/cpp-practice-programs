#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("student.txt");

    if (!in) {
        cout << "File not found" << endl;
        return 0;
    }

    string line;
    cout << "Data from file:" << endl;

    while (getline(in, line)) {
        cout << line << endl;
    }

    in.close();
    return 0;
}
