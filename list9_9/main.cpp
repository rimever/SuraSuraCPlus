#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string s;
    ifstream fin("myFile.txt");
    if (!fin.is_open()) {
        cout << "ファイルをオープンできません！";
        return 1;
    }
    while (getline(fin, s)) {
        cout << s << endl;
    }
    fin.close();
    return 0;
}