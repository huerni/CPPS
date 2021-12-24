//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
using namespace std;

struct CandyBar{
    string brand;
    float weight;
    unsigned int calorie;
};

void question_6(){
    CandyBar candyBars[3] = {
            {"Mocha Munch", 2.3f, 350},
            {"Hershey bar", 4.2f, 550},
            {"Musketeers", 2.6f, 430}
    };

    cout<<"My 1st CandyBar is "<<candyBars[0].brand<<"."<<endl;
    cout<<"And its weight is "<<candyBars[0].weight<<", calorie is "<<candyBars[0].calorie;
    cout<<"."<<endl;

    cout<<"My 2st CandyBar is "<<candyBars[1].brand<<"."<<endl;
    cout<<"And its weight is "<<candyBars[1].weight<<", calorie is "<<candyBars[1].calorie;
    cout<<"."<<endl;

    cout<<"My 2st CandyBar is "<<candyBars[2].brand<<"."<<endl;
    cout<<"And its weight is "<<candyBars[2].weight<<", calorie is "<<candyBars[2].calorie;
    cout<<"."<<endl;
}