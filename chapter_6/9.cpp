//
// Created by shouxin on 2021/12/30.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct patrons{
    string name;
    double fund;
};

void question_9(){
    ifstream fin;
    string file_name;

    cout<<"Enter the file name:";
    getline(cin, file_name);
    fin.open(file_name);
    if(!fin.is_open()){
        cout<<"Error to open file!"<<endl;
        exit(EXIT_FAILURE);
    }
    int patrons_numbers;
    patrons *ppatrons;
    int id = 0;
    bool empty = true;
    fin>>patrons_numbers;
    if(patrons_numbers <= 0){
        exit(EXIT_FAILURE);
    }
    ppatrons = new patrons[patrons_numbers];
    fin.get();
    while(!fin.eof() && id < patrons_numbers){
        getline(fin, ppatrons[id].name);
        cout<<"Read Name: "<<ppatrons[id].name<<endl;
        fin>>ppatrons[id].fund;
        cout<<"Read fund: "<<ppatrons[id].fund<<endl;
        fin.get();
        id++;
    }
    fin.close();
    cout<<"Grand Patrons"<<endl;
    for(int i = 0; i<patrons_numbers; i++){
        if(ppatrons[i].fund >= 10000){
            cout<<ppatrons[i].name<<": "<<ppatrons[i].fund<<endl;
            empty = false;
        }
    }
    if(empty) cout<<"NONE"<<endl;
    empty = false;
    cout<<"Patrons"<<endl;
    for(int i = 0; i<patrons_numbers; i++){
        if(ppatrons[i].fund < 10000){
            cout<<ppatrons[i].name<<": "<<ppatrons[i].fund<<endl;
        }
    }
    if(empty) cout<<"NONE"<<endl;
}