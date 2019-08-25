#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    string s;
    do {
        cout << "文字列の入力:";
        cin >> s;
        v.push_back(s);
    } while (s != "..");
    v.pop_back();
    int length = v.size();
    for (int i = 0; i < length; i++) {
        cout << "ベクトルの内容:" << v[i] << endl;
    }
    return 0;
}