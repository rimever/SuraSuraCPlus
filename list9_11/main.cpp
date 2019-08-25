#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char data;
    ifstream fin("myFile.bin", ios::in | ios::binary);
    if (!fin.is_open()) {
        cout << "ファイルをオープンできません！";
        return 1;
    }
    while (fin.get(data)) {
        cout << "[" << (int) data << "]";
    }
    cout << endl;
    fin.close();
    return 0;
}