//
// Created by shouxin on 2021/12/16.
//

#include <iostream>
using namespace std;

void question_5(){
    long long world_population, US_population;

    cout<<"Enter the world's population: ";
    cin>>world_population;
    cout<<endl<<"Enter the population of US: ";
    cin>>US_population;
    cout<<"The population of the US is "<< (US_population*1.0 / world_population*1.0) * 100<<"% of the world population."<<endl;

}