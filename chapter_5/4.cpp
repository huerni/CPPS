//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
using namespace std;

const int DEPOSIT_BASE = 100;

void question_4(){
    float daphne_deposit = DEPOSIT_BASE;
    float cleo_deposit = DEPOSIT_BASE;
    int year = 0;
    while(cleo_deposit <= daphne_deposit){
        cout<<"In "<<year<<"Year: Daphne = "<<daphne_deposit<<endl;
        cout<<"\tCleo = "<<cleo_deposit;
        cleo_deposit += cleo_deposit * 0.05;
        daphne_deposit += DEPOSIT_BASE * 0.10;
    }

    cout<<"In "<<year<<" year: Daphne = "<<daphne_deposit<<endl;
    cout<<"\tCelo = "<<cleo_deposit<<endl;
}