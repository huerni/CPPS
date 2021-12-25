//
// Created by shouxin on 2021/12/25.
//

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 20;
const string FINISHED = "done";

void question_9(){
    string words;
    int count = 0;
    cout<<"Enter words (to stop, type the word done): "<<endl;
    while(words != FINISHED){
        cin>>words;
        cin.get();
        count++;
    }
    cout<<"You entered a total of "<<count-1<<" words."<<endl;
}