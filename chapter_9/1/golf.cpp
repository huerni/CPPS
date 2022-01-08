//
// Created by shouxin on 2022/1/8.
//

#include "golf.h"
#include <iostream>
#include <cstring>
using namespace std;

void question_1(){
    golf ann;
    setgolf(ann, "AnnBirdfree", 24);

    golf andy;
    setgolf(andy);
    showgolf(ann);
    showgolf(andy);
}

void setgolf(golf& g, const char*name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf& g){
    char name[Len];
    int hc;
    cout<<"Please enter the name: ";
    cin.getline(name, Len);
    cout<<"Please enter the handicap: ";
    while(!(cin >> hc)){
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout<<"Please enter the golf's handicap: ";
    }
    if(name[0] != '\0'){
        setgolf(g, name, hc);
        return 1;
    }
    else return 0;
}

void handicap(golf& g, int hc){
    g.handicap = hc;
}

void showgolf(const golf& g){
    cout<<"Name: "<<g.fullname<<", Handicap is "<<g.handicap<<endl;
}