#include <iostream>
#include "HealthChecker.h"

int main() {
    HealthChecker yamada("山田一郎", 170, 67.5);
    cout << yamada.getName() << "さんのBMIは、" << yamada.getBmi() << "です。" << endl;
    return 0;
}