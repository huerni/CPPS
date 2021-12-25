//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
using namespace std;

void question_3(){
    double temp, sum = 0;
    do{
        cout<<"Input a numeral to add: ";
        cin>>temp;
        sum += temp;
    }while(temp != 0);

    cout<<"Input end.\n"<<"The sum = "<<sum<<endl;

}