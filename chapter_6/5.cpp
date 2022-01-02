//
// Created by shouxin on 2021/12/30.
//

#include <iostream>
using namespace std;

void question_5(){
    float money;
    cout<<"Hello, enter your salary to calculate tax:";
    while(cin>>money){
        if(money < 0) break;
        float tax = 0;
        if(money <= 5000)
            tax = 0;
        else if(money <= 15000){
            tax = (money-5000) * 0.1;
        }
        else if(money <= 35000)
            tax = 10000*0.1+(money-15000)*0.15;
        else if(money > 35000){
            tax = 10000*0.1 + 20000*0.15 + (money-35000)*0.2;
        }
        cout<<"Your salary is "<<money<<" tvarps, ans you should pay ";
        cout<<tax<<" tvarps."<<endl;
        cout<<"enter your salary to calculate tax:";
    }

}