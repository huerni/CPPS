//
// Created by shouxin on 2021/12/30.
//

#include <iostream>
using namespace std;

void question_3(){
    cout<<"Please enter one of the following choices: "<<endl;
    cout<<"c) carnivore       p)pianist"<<endl;
    cout<<"t) tree            g) game"<<endl;

    char a;
    while(cin>>a){
        switch (a) {
            case 'c': cout<<"A maple is a carnivore"<<endl; return;
            case 'p': cout<<"A maple is a pianist"<<endl; return;
            case 'g': cout<<"A maple is a game"<<endl; return;
            case 't': cout<<"A maple is a tree"<<endl; return;
            default: cout<<"Please enter a c, p, t, or g: ";
        }
    }
}