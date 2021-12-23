//
// Created by shouxin on 2021/12/14.
//


#include <iostream>
using namespace std;

const int FOOT_TO_INCH = 12;

void question_1(){
    int height;
    cout<<"Enter your height in inchs_";
    cin>>height;
    cout<<endl<<"Your Height convert to "<<height/FOOT_TO_INCH;
    cout<<" foot and "<<height%FOOT_TO_INCH<<" inch height."<<endl;
}