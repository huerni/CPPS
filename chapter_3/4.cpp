//
// Created by shouxin on 2021/12/16.
//

#include<iostream>
using namespace std;

const int DAY_TO_HOURS = 24;
const int HOUR_TO_MINUTES = 60;
const int MINUTE_TO_SECONDS = 60;

void question_4(){
    long long seconds;
    int days, hours, minutes;

    cout<<"Enter the number of seconds: ";
    cin>>seconds;

    cout<<seconds<<" seconds = ";
    minutes = seconds / MINUTE_TO_SECONDS;
    seconds = seconds % MINUTE_TO_SECONDS;

    hours = minutes / HOUR_TO_MINUTES;
    minutes = minutes % HOUR_TO_MINUTES;

    days = hours / DAY_TO_HOURS;
    hours = hours % DAY_TO_HOURS;

    cout<<days<<" days,"<<hours<<" hours,"<<minutes<<" minutes,"<<seconds<<" seconds."<<endl;
}