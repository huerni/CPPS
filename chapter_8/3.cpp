//
// Created by shouxin on 2022/1/4.
//

#include <iostream>
#include <string>
using namespace std;

void uppercase(string& s);

void question_3(){
    string s;
    cout<<"Enter a string (q to quit): ";
    getline(cin, s);
    while (s != "q"){
        uppercase(s);
        cout<<s<<endl;
        cout<<"Next string (q to quit): ";
        getline(cin, s);
    }
}

void uppercase(string& s){
    for(int i = 0; i<s.size(); i++){
        s[i] = toupper(s[i]);
    }
}
