#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fout("myFile.bin", ios::out | ios::binary);
    if (!fout.is_open()) {
        cout << "ファイルをオープンできません！";
        return 1;
    }
    for (char data = 1; data < 10; data++) {
        fout.put(data);
    }
    fout.close();
    cout << "ファイルに書き込みました！";
    return 0;
}