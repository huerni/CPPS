//
// Created by shouxin on 2022/1/4.
//

#include <iostream>
using namespace std;

double add(double, double);
double subtract(double, double);
double calculate(double, double , double (*)(double , double ));

void question_10(){
    double q = calculate(2.5, 10.4, add);
    cout<<"The Answer of add is "<<q<<endl;
    double t = calculate(2.5, 10.4, subtract);
    cout<<"The Answer of substract is "<<t<<endl;
}

double add(double x, double y){
    return x+y;
}

double subtract(double x, double y){
    return x-y;
}

double calculate(double x, double y, double (*pf)(double x1, double x2)){
    return pf(x, y);
}