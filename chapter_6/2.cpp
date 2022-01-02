//
// Created by shouxin on 2021/12/28.
//

#include <iostream>
#include <array>

using namespace std;

void question_2(){
    array<double, 10> arr{};
    int x;
    double sum = 0;
    int i = 0;
    int count = 0;
    cout<<"Enter hte double numerial: ";
    while(cin>>x && i < 10){
        arr[i++] = x;
        sum += x;
        cout<<"No."<<i<<" Data input to Array."<<endl;
        cout<<"Enter the double numerial: ";
    }

    double mean = sum / i;
    for(const auto &a : arr){
        if(a > mean) count++;
    }
    cout<<"The Average is "<<mean<<" and "<<count;
    cout<<" data bigger than average."<<endl;
}