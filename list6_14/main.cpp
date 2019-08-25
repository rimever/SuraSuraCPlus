#include <iostream>
#include "Counter.h"
using namespace std;

class GenderCountBoard {
private:
    Counter male;
    Counter female;
public:
    void upMaleCounter();
    void upFemaleCounter();
    int getMaleCounter();
    int getFemaleCounter();
    GenderCountBoard();
};

void GenderCountBoard::upMaleCounter() {
this->male.upVal();
}

void GenderCountBoard::upFemaleCounter() {
this->female.upVal();
}

int GenderCountBoard::getMaleCounter() {
    return this->male.getVal();
}

int GenderCountBoard::getFemaleCounter() {
    return this->female.getVal();
}

GenderCountBoard::GenderCountBoard() {

}

int main() {
    GenderCountBoard gcb;
    gcb.upMaleCounter();
    gcb.upMaleCounter();

    gcb.upFemaleCounter();
    gcb.upFemaleCounter();
    gcb.upFemaleCounter();

    cout << "男性用のカウンタの値 = " << gcb.getMaleCounter() << endl;
    cout << "女性用のカウンタの値 = " << gcb.getFemaleCounter() << endl;

    return 0;
}