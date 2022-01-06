//
// Created by shouxin on 2022/1/4.
//

#include <iostream>
using namespace std;

struct CandyBar{
    string brand;
    float weight;
    int calorie;
};

void create_candy(CandyBar& candy, string s = "Millennium Munch", float w = 2.85, int c = 350);
void show_candy(const CandyBar& candy);

void question_2(){
    CandyBar candyBar;
    create_candy(candyBar);
    show_candy(candyBar);
    create_candy(candyBar, "Nestle", 1.2, 200);
    show_candy(candyBar);
}

void create_candy(CandyBar& candy, string s, float w, int c){
    candy.brand = s;
    candy.weight = w;
    candy.calorie = c;
}

void show_candy(const CandyBar& candy){
    cout<<"The candybar is made by "<<candy.brand;
    cout<<" and its weight "<<candy.weight<<", ";
    cout<<candy.calorie<<" calorie"<<endl;
}