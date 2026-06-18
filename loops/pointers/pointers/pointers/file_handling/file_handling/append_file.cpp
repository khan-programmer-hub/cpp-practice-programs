#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("student.txt", ios::app);

    if (!out) {
        cout << "File could not be opened!" << endl;
        return 0;
    }

    string subject;
    cout << "Enter your favorite subject: ";
    getline(cin, subject);

    out << "Favorite Subject: " << subject << endl;

    out.close();
    cout << "Data successfully append to file." << endl;

    return 0;
}
