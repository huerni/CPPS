//
// Created by shouxin on 2022/1/6.
//

#include <iostream>
#include <cstring>
using namespace std;

template <typename T> T maxn(T [], int len);
template<> char*maxn<char*>(char*[], int);

void question_6(){
    int arr[5] = {1, 2, 5, 4, 3};
    double arr_d[5] = {19.6, 13, 19.8, 100.8, 98.4};

    string ss[] = {"Hello", "Hello World!"};

    cout<<"The Max Element of int array: "<<maxn(arr, 5)<<endl;
    cout<<"The Max Element of double array: "<<maxn(arr_d, 5)<<endl;
    cout<<"The Max Element of string: "<<maxn(ss, 2)<<endl;
}

template <typename T> T maxn(T st[], int len){
    T max = st[0];
    for(int i = 1; i<len; i++){
        if(max < st[i]) max = st[i];
    }

    return max;
}

template<> char* maxn<char*>(char* sst[], int n){
    int pos = 0;
    for(int i = 0; i<n; i++){
        if(strlen(sst[pos]) < strlen(sst[i])) pos = i;
    }

    return sst[pos];
}
