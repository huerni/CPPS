//
// Created by shouxin on 2022/1/2.
//

#include <iostream>
using namespace std;

long double probability(double fnumbers, double snumber, double picks);

void question_4(){
    cout<<"Field number is 45, and special number is 27."<<endl;
    cout<<"the probability is one of the: "<<probability(45, 27, 5)<<endl;
}

long double probability(double fnumbers, double snumber, double picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for(n = fnumbers, p = picks; p > 0; n--, p--){
        result = result * n / p;
    }

    return result /= snumber;
}