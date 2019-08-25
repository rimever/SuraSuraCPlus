#include <iostream>
#include "HealthChecker.h"

using namespace std;

int main() {
    cout << "標準BMIは、" << HealthChecker::getStdBmi() << "です。" << endl;
    HealthChecker yamada("山田一郎", 170, 67.5);
    cout << yamada.getName() << "さんのBMIは、" << yamada.getBmi() << "です。" << endl;
    cout << "標準体重は、" << yamada.getStdWeight() << "です。" << endl;
    return 0;
}