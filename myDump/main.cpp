#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
int main(int argc, char *argv[]) {
    char data;
    int num;
    if (argc != 2) {
        cerr << "使い方:myDump ファイル名" << endl;
        return 1;
    }
    ifstream fin(argv[1], ios::in | ios::binary);
    if (!fin.is_open()) {
        cerr << "ファイルをオープンできません！";
        return 2;
    }
    num = 0;
    while (fin.get(data)) {
        cout << setw(2) << setfill('0') << hex << uppercase << ((int) data & 0xff) << ' ';
        num++;
        if (num % 16 == 0) {
            cout << endl;
        }
    }
    return 0;
}