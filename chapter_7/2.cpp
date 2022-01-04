//
// Created by shouxin on 2022/1/2.
//

#include <iostream>
using namespace std;

const int SIZE = 10;
int set_mark(int[], int);
void display_mark(int[], int);
double average_mark(int[], int);

void question_2(){
    int size, golf_mark[SIZE];
    size = set_mark(golf_mark, SIZE);
    display_mark(golf_mark, size);
    cout<<"The average marks id : "<<average_mark(golf_mark, size)<<endl;
}

int set_mark(int arr[], int size){
    int i = 0;
    do {
        cout<<"Enter the No."<<i+1<<" golf marks: ";
        cin>>arr[i++];
        cin.get();
        cout<<"press enter to continue, or 's' for STOP input: ";
        if(cin.get() == 's'){
            for(; i<size; i++) arr[i] = 0;
            break;
        }
    }while(i < size);

    return i;
}

void display_mark(int arr[], int size){
    cout<<"The marks is below: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

double average_mark(int arr[], int size){
    int sum = 0;
    for(int i = 0; i<size; i++) sum += arr[i];

    return sum*1.0 / size*1.0;
}