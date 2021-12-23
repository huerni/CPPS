//
// Created by shouxin on 2021/12/14.
//

#include <iostream>
using namespace std;

void question_5(){
    double c_degree, f_degree;

    cout<<"Please enter a Celsius value: ";
    cin>>c_degree;
    f_degree = 1.8 * c_degree + 32.0;
    cout<<c_degree<<" degrees Celsius is "<<f_degree<<endl;
}
