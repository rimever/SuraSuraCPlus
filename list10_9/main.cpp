#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<string> v;
    v.push_back("apple");
    v.push_back("orange");
    v.push_back("melon");
    v.push_back("banana");
    v.push_back("lemon");
    string s;
    cout << "探索するデータ:";
    cin >> s;
    vector<string>::iterator it = find(v.begin(), v.end(), s);
    if (it != v.end()) {
        cout << *it << "が見つかりました！" << endl;
    } else {
        cout << "見つかりません！" << endl;
    }
    return 0;
}