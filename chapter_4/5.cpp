//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
using namespace std;

struct CandyBar{
    string brand;
    float weight;
    unsigned int calories;
};

void question_5(){
    CandyBar snack = {"Mocha Munch", 2.3f, 350};

    cout<<"My favourite CandyBar is "<<snack.brand<<"."<<endl;
    cout<<"And its weight is "<<snack.weight<<", calorie is "<<snack.calories;
    cout<<"."<<endl;
}