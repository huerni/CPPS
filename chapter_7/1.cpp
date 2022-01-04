//
// Created by shouxin on 2022/1/2.
//

#include <iostream>
using namespace std;

double harmonic(double x, double y);

void question_1(){
    double input_num1, input_num2;
    cout<<"Enter the two number(seperate by blank): ";
    cin>>input_num1>>input_num2;
    while(input_num1 != 0 || input_num2 != 0){
        cout<<"The "<<input_num1<<" and "<<input_num2;
        cout<<" harmonic mean is "<<harmonic(input_num1, input_num2)<<endl;
        cout<<"Enter the operand(seperate by blank): ";
        cin>>input_num1>>input_num2;
    }
}

double harmonic(double x, double y){
    return 2.0*x*y / (x+y);
}