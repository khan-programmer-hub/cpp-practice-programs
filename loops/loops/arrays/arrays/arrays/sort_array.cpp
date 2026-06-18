#include<iostream>
using namespace std;

int main(){

    int array[5];
    int sort;

    for(int i=0; i<5; i++){
        cout<<"Enter 5 numbers\n";
        cin>>array[i];
    }

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(array[i] > array[j]){
                sort = array[i];
                array[i] = array[j];
                array[j] = sort;
            }
        }
    }

    cout<<"\nSorted array\n";

    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }

    return 0;
}
