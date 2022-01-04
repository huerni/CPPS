//
// Created by shouxin on 2022/1/3.
//

#include <iostream>
using namespace std;

const int Max = 5;

double* fill_array(double *begin, double *end);
void show_array(double *begin, double *end);
void revalue(double r, double* begin, double *end);

void question_7(){
    double properties[Max];
    double *pend = fill_array(properties, properties+Max);
    show_array(properties, pend);
    if(pend - properties > 0){
        cout<<"Enter revalue factor: ";
        double factor;
        while(!(cin>>factor)){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout<<"bad input; please input a number: ";
        }
        revalue(factor, properties, pend);
        show_array(properties, pend);
    }
    cout<<"Done.\n";
}

double *fill_array(double *begin, double *end){
    double temp;
    double *p;
    for(p = begin; p != end; p++) {
        cout<<"Enter value #"<<p-begin + 1<<": ";
        cin>>temp;
        if(!cin){
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout<<"bad input; input process terminated.\n";
            break;
        }else if(temp < 0)
            break;
        *p = temp;
    }

    return p;
}

void show_array(double *begin, double *end){
    for(double *p = begin; p != end; p++){
        cout<<"Property #"<< (p-begin) / sizeof(double) + 1<<":$";
        cout<<*p<<endl;
    }
}

void revalue(double r, double *begin, double *end){
    double *p = begin;
    for(double *p = begin; p != end; p++){
        *p = r;
    }
}