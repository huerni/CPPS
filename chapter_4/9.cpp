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

void question_9(){
    CandyBar *candyBars = new CandyBar[3];

    candyBars[0].brand = "Mocha Munch";
    candyBars[0].weight = 2.3f;
    candyBars[0].calorie = 350;

    candyBars[1].brand = "Hershey bar";
    candyBars[1].weight = 4.2f;
    candyBars[1].calorie = 550;

    candyBars[2].brand = "Musketeers";
    candyBars[2].weight = 2.6f;
    candyBars[2].calorie = 430;

    cout<<"My 1st CandyBar is "<<candyBars[0].brand<<"."<<endl;
    cout<<"And its weight is "<<candyBars[0].weight<<", calorie is "<<candyBars[0].calorie;
    cout<<"."<<endl;

    cout<<"My 2st CandyBar is "<<candyBars[1].brand<<"."<<endl;
    cout<<"And its weight is "<<candyBars[1].weight<<", calorie is "<<candyBars[1].calorie;
    cout<<"."<<endl;

    cout<<"My 2st CandyBar is "<<candyBars[2].brand<<"."<<endl;
    cout<<"And its weight is "<<candyBars[2].weight<<", calorie is "<<candyBars[2].calorie;
    cout<<"."<<endl;

    delete [] candyBars;
}