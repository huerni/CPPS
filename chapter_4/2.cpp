//
// Created by shouxin on 2021/12/24.
//

//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
#include <string>
using namespace std;

void question_2(){
    string first_name, last_name;
    char grade;
    int age;

    cout<<"What is your first name? ";
    getline(cin, first_name);
    cout<<"What is your last name? ";
    getline(cin, last_name);
    cout<<"What letter grade do you deserve? ";
    cin>>grade;
    cout<<"What is your age? ";
    cin>>age;
    cout<<endl<<"Name "<<last_name<<" , "<<first_name<<endl;
    cout<<"Grade: "<<char(grade+1)<<endl;
    cout<<"Age: "<<age;
}