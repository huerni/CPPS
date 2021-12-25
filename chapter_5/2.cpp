//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
#include <array>
using namespace std;

const int ArSize = 101;

void question_2(){
    array<long double, ArSize> factorials{};
    factorials[1] = factorials[0] = 1;
    for(int i = 2; i < ArSize; i++){
        factorials[i] = i * factorials[i-1];
    }
    for(int i = 0; i < ArSize; i++)
        cout<<i<<"! = "<< factorials[i]<<endl;
}