//
// Created by shouxin on 2021/12/24.
//

#include <iostream>
#include <array>
using namespace std;

void question_10(){
    array<float, 3> arr{};
    float average;

    cout<<"Please input three record of 40miles.\n";
    cout<<"First record:";
    cin>>arr[0];
    cout<<"Second record:";
    cin>>arr[1];
    cout<<"Third record:";
    cin>>arr[2];
    cout<<"Ok, you input:\n1."<<arr[0]<<"\n2."<<arr[1]<<"\n3."<<arr[2]<<endl;
    average = (arr[0] + arr[1] + arr[2]) / 3.0;
    cout<<"Congratulate, your average performance is "<<average<<".";
}