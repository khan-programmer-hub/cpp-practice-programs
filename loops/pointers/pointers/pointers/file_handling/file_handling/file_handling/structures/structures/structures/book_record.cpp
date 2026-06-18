#include<iostream>
using namespace std;

struct book{
    int id;
    float price;
    int pages;
};

int main(){

    book books[5];
    book mostexpensive;

    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter details of book "<<i+1<<endl;
        cin>>books[i].id>>books[i].price>>books[i].pages;
    }

    mostexpensive = books[0];

    for(int i = 0; i < 5; i++)
    {
        if(books[i].price > mostexpensive.price)
            mostexpensive = books[i];
    }

    cout<<"Most expensive book"<<endl;
    cout<<"ID: "<<mostexpensive.id<<endl;
    cout<<"Price: "<<mostexpensive.price<<endl;
    cout<<"Pages: "<<mostexpensive.pages<<endl;

    return 0;
}
