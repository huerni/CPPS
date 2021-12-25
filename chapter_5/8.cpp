//
// Created by shouxin on 2021/12/25.
//

#include <iostream>
#include <cstring>
using namespace std;

const int SIZE = 20;
const char FINISHED[] = "done";

void question_8(){
    unsigned int count = 0;
    char words[SIZE];
    cout<<"Enter words (to stop, type the word done): "<<endl;
    while(strcmp(words, FINISHED) != 0){
        cin>>words;
        cin.get();
        count++;
    }
    cout<<"You entered a total of "<<count-1<<" words."<<endl;
}