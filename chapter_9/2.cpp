//
// Created by shouxin on 2022/1/8.
//

#include <iostream>
using namespace std;

void strcount(const string& str);

void question_2(){
    string str;
    while(getline(cin, str)){
        if(str == "") break;
        strcount(str);
        cout<<"Enter next line (empty line to quit):\n";
    }
}

void strcount(const string& str){
    static int total = 0;
    int count = str.size();
    total += count;
    cout<<count<<" characters\n";
    cout<<total<<" characters total\n";
}