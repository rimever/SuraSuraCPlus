#include <iostream>
#include "chapter4.h"

using namespace std;


int main() {
    const int DATA_NUM = 10;
    int point[DATA_NUM] = {85, 72, 63, 45, 100, 98, 52, 88, 74, 65};
    double average;

    average = getAverage(point, DATA_NUM);

    cout << "平均点:" << average << endl;

    return 0;
}