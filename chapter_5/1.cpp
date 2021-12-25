//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
using namespace  std;

void question_1(){
    int l, r;
    cout<<"Enter the first numeral: ";
    cin>>l;
    cout<<"Enter the last numeral: ";
    cin>>r;

    int sum = 0;
    for(int i = l; i<=r; i++) sum += i;
    cout<<"The sum of "<<l<<"+...+"<<r<<" is ";
    cout<<sum<<endl;
}