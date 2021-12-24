//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
#include <cstring>
using namespace std;

void question_3(){
    char first_name[20], last_name[20];
    char name[40];
    cout<<"Enter your first name: ";
    cin.getline(first_name, 20);
    cout<<"Enter your last name: ";
    cin.getline(last_name, 20);
    strcpy(name, strcat(strcat(last_name, ", "), first_name));
    cout<<"Here's the information in a single string: "<<name<<endl;

}