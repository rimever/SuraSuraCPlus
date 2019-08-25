#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    for (char data = 0; data <= 15; data++) {
        cout << setw(2) << setfill('0') << hex << uppercase << ((int) data & 0xff) << ' ';
    }
    cout << endl;
    return 0;
}