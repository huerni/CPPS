//
// Created by shouxin on 2021/12/25.
//

#include <iostream>
using namespace std;

void question_6(){
    const string Month[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int sales_month[3][12] = {};

    for(int i = 0; i<3; i++){
        cout<<"Starting "<<i+1<<" year's data."<<endl;
        for(int j = 0; j<12; j++){
            cout<<"Enter the sale amount of "<<Month[j]<<" :";
            cin>>sales_month[i][j];
        }
        cout<<"End of "<<i+1<<" year's data."<<endl;
    }
    cout<<"Input done."<<endl;
    unsigned int sum = 0;
    for(int i = 0; i<3; i++){
        unsigned int sum_year = 0;
        for(int j = 0; j<12; j++){
            cout<<Month[i]<<" SALE: "<<sales_month[i][j]<<endl;
            sum_year += sales_month[i][j];
        }
        cout<<i+1<<" year's sales : "<<sum_year<<endl;
        sum += sum_year;
    }
    cout<<"Total sale : "<<sum<<endl;
}