//
// Created by shouxin on 2021/12/25.
//

#include <iostream>
using namespace std;

struct CAR{
    string manufacturer;
    int date;
};

void question_7(){
    int catalog;
    cout<<"How many do you wish to catalog? ";
    cin>>catalog;
    CAR *car = new CAR[catalog];

    for(int i = 0; i<catalog; i++){
        cout<<"Car #"<<i+1<<": "<<endl;
        cout<<"Please enter the maker: ";
        cin.get();
        getline(cin, car[i].manufacturer);
        cout<<"Please enter the year made: ";
        cin>>car[i].date;
    }
    cout<<"Here is you collection: "<<endl;
    for(int i = 0; i<catalog; i++){
        cout<<car[i].date<<" "<<car[i].manufacturer<<endl;
    }
}