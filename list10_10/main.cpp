#include <iostream>
#include <vector>

using namespace std;

void showVector(string title, const vector<int> &v) {
    cout << title << endl;
    cout << "ベクトルの内容";
    int length = v.size();
    for (int i = 0; i < length; ++i) {
        cout << "[" << v[i] << "]";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    v.push_back(111);
    v.push_back(111);
    v.push_back(111);
    v.push_back(222);
    v.push_back(222);
    showVector("***** 初期状態 *****", v);

    int num = count(v.begin(), v.end(), 111);
    cout << "***** 111のデータ数 *****" << endl;
    cout << num << endl;
    reverse(v.begin(), v.end());
    showVector("***** 逆順にする *****", v);
    replace(v.begin(), v.end(), 111, 222);
    showVector("***** 置き換える *****", v);
    return 0;
}