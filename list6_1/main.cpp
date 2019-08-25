#include <iostream>

using namespace std;

int counterVal[10];

void resetCounterVal(int num) {
    counterVal[num] = 0;
}

void upCounterVal(int num) {
    counterVal[num]++;
}

int main() {
    resetCounterVal(3);
    resetCounterVal(5);
    upCounterVal(3);
    upCounterVal(3);

    upCounterVal(5);
    upCounterVal(5);
    upCounterVal(5);
    upCounterVal(5);

    cout << "3番のカウンタの値 = " << counterVal[3] << endl;
    cout << "5番のカウンタの値 = " << counterVal[5] << endl;


    return 0;
}