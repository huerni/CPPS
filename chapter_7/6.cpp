//
// Created by shouxin on 2022/1/3.
//

#include <iostream>
using namespace std;

int Fill_array(double [], int);

void Show_array(double [], int);

void Reverse_array(double [], int);

const int SIZE = 20;

void question_6(){
    double array[SIZE];
    int size = Fill_array(array, SIZE);
    Show_array(array, size);
    Reverse_array(array, size);
    Show_array(array, size);
}

int Fill_array(double arr[], int size){
    int count = 0;
    double temp;
    cout<<"Enter the number seperate by blank, 's' to STOP: ";
    cin>>temp;
    while(count < size){
        if(cin.get() == 's') return count;
        arr[count] = temp;
        cin>>temp;
        count++;
    }
}

void Show_array(double arr[], int size){
    cout<<"The array's data: "<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void Reverse_array(double arr[], int size){
    double temp;
    for(int i = 0; i<size/2; i++){
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size-i-1] = temp;
    }
}