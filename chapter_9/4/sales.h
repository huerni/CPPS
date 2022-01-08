//
// Created by shouxin on 2022/1/8.
//

#ifndef CPPS_SALES_H
#define CPPS_SALES_H

namespace SALES{
    const int QUARTERS = 4;
    struct Sales{
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };
    void setSales(Sales& s, const double ar[], int n);
    void setSales(Sales& s);
    void showSales(const Sales& s);
}


#endif //CPPS_SALES_H
