//
// Created by shouxin on 2021/12/30.
//

#include <iostream>
using namespace std;

struct patrons{
    string name;
    double fund;
};

void question_6(){
    int patronsNums;
    patrons *ppatrons;

    cout<<"How many patrons?";
    cin>>patronsNums;
    cin.get();
    ppatrons = new patrons[patronsNums];
    int id = 0;
    bool empty = true;
    cout<<"Starting to input patrons' info:"<<endl;
    while(id < patronsNums){
        cout<<"Enter the full name of patrons: ";
        getline(cin, ppatrons[id].name);
        cout<<"Enter the fund of "<<ppatrons[id].name<<": ";
        cin>>ppatrons[id].fund;
        cin.get();
        id++;
        cout<<"Continue to input, or press(f) to finished.";
        if(cin.get() == 'f') break;
    }
    cout<<"Grand Patrons"<<endl;
    for(int i = 0; i<patronsNums; i++){
        if(ppatrons[i].fund >= 1000){
            cout<<ppatrons[i].name<<": "<<ppatrons[i].fund<<endl;
            empty = false;
        }
    }
    if(empty) cout<<"NONE"<<endl;
    empty = false;
    cout<<"Patrons"<<endl;
    for(int i = 0; i<patronsNums; i++){
        if(ppatrons[i].fund < 1000){
            cout<<ppatrons[i].name<<": "<<ppatrons[i].fund<<endl;
        }
    }
    if(empty) cout<<"NONE"<<endl;
}