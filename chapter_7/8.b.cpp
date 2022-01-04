//
// Created by shouxin on 2022/1/4.
//

#include <iostream>
#include <string>
using namespace std;

const int Season = 4;
const char* Sname_b[] = {"Spring", "Summer", "Fall", "Winter"};

struct Spend{
    double money[Season];
};

void fill_b(double arr[], int size);
void show_b(const double arr[], int size);

void question_8_b(){
    Spend expenses;
    fill_b(expenses.money, Season);
    show_b(expenses.money, Season);
}

void fill_b(double arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<"Enter "<<Sname_b[i]<<" expenses: ";
        cin>>arr[i];
    }
}

void show_b(const double arr[], int size){
    double total = 0.0;
    cout<<"\nEXPENSES\n";

    for(int i = 0; i<size; i++){
        cout<<Sname_b[i]<<":$ "<<arr[i]<<endl;
        total += arr[i];
    }
    cout<<"Total Expenses:$ "<<total<<endl;
}