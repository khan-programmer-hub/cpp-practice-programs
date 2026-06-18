#include<iostream>
using namespace std;

class book{
public:
    string title;
    float price;
};

int main(){

    book b1, b2;

    b1.title = "Peer e Kamil";
    b1.price = 5000;

    b2.title = "Hijab";
    b2.price = 3000;

    cout<<"-----Display Book 1-----"<<endl;
    cout<<"Title: "<<b1.title<<endl;
    cout<<"Price: "<<b1.price<<endl;

    cout<<"-----Display Book 2-----"<<endl;
    cout<<"Title: "<<b2.title<<endl;
    cout<<"Price: "<<b2.price<<endl;

    return 0;
}
