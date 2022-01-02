//
// Created by shouxin on 2021/12/30.
//

#include <iostream>
using namespace std;

void question_7(){
    string words;
    cout<<"Entor words(q to quit): ";
    int vowel = 0, consonant = 0, others = 0;
    while(cin>>words){
        if(words == "q") break;
        if(isalpha(words[0])){
            switch (words[0]) {
                case 'a': vowel++; break;
                case 'e': vowel++; break;
                case 'i': vowel++; break;
                case 'o': vowel++; break;
                case 'u': vowel++; break;
                default: consonant++;
            }
        } else {
            others++;
        }
    }

    cout<<vowel<<" words beginning with vowels"<<endl;
    cout<<consonant<<" words beginning with consonants"<<endl;
    cout<<others<<" others"<<endl;
}