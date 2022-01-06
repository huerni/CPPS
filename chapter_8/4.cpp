//
// Created by shouxin on 2022/1/4.
//

#include <iostream>
#include <cstring>
using namespace std;

struct stringy {
    char *str;
    int ct;
};

void show(const stringy& beany, int n = 0);
void show(const string& str, int n = 0);
void set(stringy& ,  char *);

void question_4(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
}

void show(const stringy& st, int n){
    if(n == 0) n++;
    for(int i = 0; i<n; i++){
        cout<<st.str<<endl;
    }
}

void show(const string& st, int n){
    if(n == 0) n++;
    for(int i = 0; i<n; i++){
        cout<<st<<endl;
    }
}

void set(stringy& sty, char *st){
    sty.ct = strlen(st);
    sty.str = new char[sty.ct];
    strcpy(sty.str, st);
}