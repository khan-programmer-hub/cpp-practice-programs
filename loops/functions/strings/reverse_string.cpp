#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;

    cout<<"Enter a word:\n";
    getline(cin, word);

    string reversed = "";

    for(int i = word.length() - 1; i >= 0; i--){
        reversed += word[i];
    }

    cout<<"Reversed word: "<< reversed << endl;

    return 0;
}
