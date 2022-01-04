//
// Created by shouxin on 2022/1/2.
//

#include <iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(box);
void calc_volume(box *);

void question_3(){
    box b = {"China", 12, 12, 12, 0};
    calc_volume(&b);
    display(b);
}

void display(box b){
    cout<<"This box made by "<<b.maker<<".\nAnd height = "<<b.height;
    cout<<", width = "<<b.width<<", length = "<<b.length<<", volume = ";
    cout<<b.volume<<".";
}

void calc_volume(box * pb){
    pb->volume = pb->height * pb->length * pb->width;
    cout<<"Calculate box's volume done."<<endl;
}