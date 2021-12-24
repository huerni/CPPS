//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
using namespace std;

struct Pizza{
    string company;
    float diameter;
    float weight;
};

void question_8(){
    Pizza *dinner = new Pizza;

    cout<<"Enter the Pizza's information:"<<endl;
    cout<<"Pizza's Company:";
    getline(cin, dinner->company);
    cout<<"Pizza's diameter(inchs):";
    cin>>dinner->diameter;
    cout<<"CandBar's weight(Pounds):";
    cin>>dinner->weight;

    cout<<"The lunch pizza is "<<dinner->company<<"."<<endl;
    cout<<"And its diameter is "<<dinner->diameter<<" inch, weight is "<<dinner->weight;
    cout<<"pounds."<<endl;

}