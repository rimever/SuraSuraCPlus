#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> m;
    m.insert(make_pair("K001", "apple"));
    m.insert(make_pair("K005", "orange"));
    m.insert(make_pair("K003", "melon"));
    m.insert(make_pair("K002", "banana"));
    m.insert(make_pair("K004", "lemon"));
    string num;
    do {
        cout << "商品番号:";
        cin >> num;
        if (m.count(num) != 0) {
            cout << "対応する商品名:" << m[num] << endl;
        }
    } while (num != "..");
    return 0;
}