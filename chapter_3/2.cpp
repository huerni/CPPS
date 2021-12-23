//
// Created by shouxin on 2021/12/14.
//

#include <iostream>
#include <cmath>
using namespace std;

const int FOOT_TO_INCH = 12;
const double INCH_TO_METER = 0.0254;
const double KILOGRAM_POUND = 2.2;

void question_2(){
    int height_foot, height_inch;
    double weight_pound, weight, height, BMI;

    cout<<"Enter your height foot: ";
    cin>>height_foot;
    cout<<"Enter your height inch: ";
    cin>>height_inch;
    cout<<"Enter your weight pound: ";
    cin>>weight_pound;
    height = (height_foot * FOOT_TO_INCH + height_inch) * 1.0 * INCH_TO_METER;
    weight = weight_pound * 1.0 / KILOGRAM_POUND;
    BMI = weight / pow(height, 2);

    cout<<"Your BMI is "<<BMI<<endl;

}