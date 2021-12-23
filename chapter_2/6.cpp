//
// Created by shouxin on 2021/12/14.
//

#include<iostream>
using namespace std;

void question_6(){
    double astro_unit, light_year;

    cout<<"Enter the number of light years: ";
    cin>>light_year;
    astro_unit = 63240.0 * light_year;
    cout<<light_year<<" light year = "<<astro_unit<<" astronomical units."<<endl;
}