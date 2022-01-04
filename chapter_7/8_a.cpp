//
// Created by shouxin on 2022/1/4.
//

#include<iostream>
#include<string>
using namespace std;

const int Season = 4;
const char* Sname[] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double arr[], int size);
void show(const double arr[], int size);

void question_8_a(){
    double expenses[Season];
    fill(expenses, Season);
    show(expenses, Season);
}


void fill(double arr[], int size){
    for(int i = 0;i <size; i++){
        cout<<"Enter "<<Sname[i]<<" expenses: ";
        cin>>arr[i];
    }
}

void show(const double arr[], int size){
    double total = 0.0;
    cout<<"\nEXPENSES\n";

    for(int i = 0; i<size; i++){
        cout<<Sname[i]<<":$ "<<arr[i]<<endl;
        total += arr[i];
    }
    cout<<"Total Expenses:$ "<<total<<endl;
}