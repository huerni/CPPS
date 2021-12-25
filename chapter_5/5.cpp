//
// Created by shouxin on 2021/12/25.
//

#include<iostream>
using namespace std;

void question_5(){
    const string Month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

    int sale_month[12] = {};
    for(int i = 0; i<12; i++){
        cout<<"Enter the sale amout of "<<Month[i]<<": ";
        cin>>sale_month[i];
    }
    cout<<"Input done"<<endl;
    int sum = 0;
    for(int i = 0; i < 12; i++){
        cout<<Month[i]<<" SALE: "<<sale_month[i]<<endl;
        sum += sale_month[i];
    }

    cout<<"Total sale "<<sum<<" this year."<<endl;
}