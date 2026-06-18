#include<iostream>
using namespace std;

int main(){
    int array[5];
    int max, min;

    for(int i=0; i<5; i++){
        cout<<"Enter 5 numbers\n";
        cin>>array[i];
    }

    max = array[0];
    min = array[0];

    for(int i=0; i<5; i++){
        if(array[i] > max){
            max = array[i];
        }

        if(array[i] < min){
            min = array[i];
        }
    }

    cout<<"Maximum output\n"<<max<<endl;
    cout<<"Minimum output\n"<<min<<endl;

    return 0;
}
