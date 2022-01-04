//
// Created by shouxin on 2022/1/2.
//

#include <iostream>
using namespace std;

long long factorial(int);

void question_5(){
    int n;
    cout<<"Enter a number to calc factorial: ";
    cin>>n;
    while(n > 0){
        cout<<n<<" != "<<factorial(n)<<endl;
        cout<<"Enter a number to calc factorial: ";
        cin>>n;
    }
}

long long factorial(int n){
    if(n == 0) return 1;
    else return n * factorial(n-1);
}