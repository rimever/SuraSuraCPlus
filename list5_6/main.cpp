#include <iostream>
#include <string>
#include "HealthChecker.h"

using namespace std;


int main() {
    HealthChecker yamada("山田一郎", 170, 67.5);
    cout << "BMIは、" << yamada.getBmi() << "です。" << endl;
    return 0;
}