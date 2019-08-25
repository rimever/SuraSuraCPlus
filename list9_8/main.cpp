#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream fout("myFile.txt");
    if (!fout.is_open()) {
        cout << "ファイルをオープンできません！";
        return 1;
    }
    fout << "hello, world" << endl;
    fout << "皆さん、こんにちは" << endl;

    fout.close();
    cout << "ファイルに書き込みました！";
    return 0;
}