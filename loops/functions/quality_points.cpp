#include<iostream>
using namespace std;

int quality_points(int aver){
    if (aver >= 90)
        return 4;
    else if(aver >= 80)
        return 3;
    else if(aver >= 70)
        return 2;
    else if(aver >= 60)
        return 1;
    else
        return 0;
}

int main(){
    int average;

    cout<<"Enter the average\n";
    cin>>average;

    int number = quality_points(average);

    cout<<"The number is "<< number <<" according to average\n";

    return 0;
}
