#include <iostream>
using namespace std;
int main() {
    string s1 = "abcdefg";
    string s2 = "abcdefg";
    if (s1 == s2) {
        cout << "等しい！" << endl;
    }else {
        cout << "等しくない！" << endl;
    }
    return 0;
}