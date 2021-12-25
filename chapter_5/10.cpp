//
// Created by shouxin on 2021/12/25.
//

#include <iostream>
using namespace std;

void question_10(){
    int row = 0;
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(int i = 0; i<row; i++){
        for(int j = 0; j<row-i-1; j++) cout<<".";
        for(int j = 0; j<i+1; j++) cout<<"*";
        cout<<endl;
    }
}