//
// Created by shouxin on 2021/12/28.
//

#include <iostream>
using namespace std;

void question_1(){
    char input;
    cout<<"Enter the character: ";
    cin.get(input);

    while(input != '@'){
        if(isdigit(input)){
            cin.get(input);
            continue;
        }
        else if(islower(input)){
            input = toupper(input);
        }
        else if(isupper(input)){
            input = tolower(input);
        }
        cout<<input;
        cin.get(input);
    }
}