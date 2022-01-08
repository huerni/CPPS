//
// Created by shouxin on 2022/1/8.
//

#include <iostream>
#include "sales.h"
using namespace std;
using namespace SALES;

void question_4(){
    Sales s1, s2;
    double de[QUARTERS] = {12,23,45,67};
    setSales(s1, de, QUARTERS);
    showSales(s1);
    setSales(s2);
    showSales(s2);
}