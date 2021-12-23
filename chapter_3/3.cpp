//
// Created by shouxin on 2021/12/14.
//

#include <iostream>
using namespace std;

const int DEGREES_TO_MINUTES = 60;
const int MINUTES_TO_SECONDS = 60;

void question_3(){
    int degrees, minutes, seconds;
    double final_degrees;

    cout<<"Enter a latitude in degrees, minutes, and seconds: "<<endl;
    cout<<"First, enter the degree:";
    cin>>degrees;
    cout<<"Next, enter the minutes of arc:";
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc:";
    cin>>seconds;
    final_degrees = degrees + minutes*1.0 / DEGREES_TO_MINUTES + seconds*1.0 / (DEGREES_TO_MINUTES * MINUTES_TO_SECONDS);
    cout<<degrees<<" degrees, "<<minutes<<" minutes, "<<seconds<<" seconds = "<<final_degrees<<" degrees.";

}