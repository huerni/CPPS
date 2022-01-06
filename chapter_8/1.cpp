//
// Created by shouxin on 2022/1/4.
//

#include <iostream>
using namespace std;

void loop_print(const char* str, int n = 0);

void question_1(){
    char *str = "Hello World!";
    loop_print(str);
    loop_print(str);
    loop_print(str, 5);
}

void loop_print(const char* str, int n){
    static int func_count = 0;
    func_count++;
    if(n == 0){
        cout<<"Arguments = 0;\n";
    }else {
        cout<<"Arguments != 0;\n";
        for(int i = 0; i<func_count; i++){
            cout<<str<<endl;
        }
    }
}