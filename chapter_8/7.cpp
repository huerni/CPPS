//
// Created by shouxin on 2022/1/6.
//

#include <iostream>
using namespace std;

template <typename T>
void ShowArray(T arr[]);

template <typename T>
void ShowArray(T* arr[], int n);
template <typename T>
void ShowArray(T arr[], int n);
template <typename T> T SumArray(T arr[], int n);
template <typename T> T SumArray(T *arr[], int n);

struct debts{
    char name[50];
    double amount;
};

void question_7(){
    int things[16] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
            {"Ima Wolfe", 2400.0},
            {"Ura Foxe", 1300.0},
            {"Iby Stout", 1800.0}
    };
    double *pd[3];
    for(int i = 0; i<3; i++){
        pd[i] = &mr_E[i].amount;
    }
    cout<<"Listing Mr. E's counts of things:\n";
    ShowArray(things, 6);
    cout<<"Listing Mr. E's debts:\n";
    ShowArray(pd, 3);
    cout<<"The sum of things: "<<SumArray(things, 6)<<endl;
    cout<<"The sum of pd: "<<SumArray(pd, 3)<<endl;

}


template <typename T>
void ShowArray(T arr[], int n){
    cout<<"Template B\n";
    for(int i = 0; i<n; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}

template <typename T>
void ShowArray(T *arr[], int n){
    cout<<"template B\n";
    for(int i = 0; i<n; i++){
        cout<<*arr[i]<<" ";
    }
    cout<<endl;
}

template <typename T>
T SumArray(T arr[], int n){
    T sum = 0;
    for (int i = 0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

template <typename T>
T SumArray(T *arr[], int n){
    T sum = *arr[0] - *arr[0];
    for(int i = 0; i<n; i++){
        sum += *arr[i];
    }

    return sum;
}

