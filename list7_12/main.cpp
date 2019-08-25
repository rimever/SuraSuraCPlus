#include <iostream>
using namespace std;

int main() {
    char s1[] = "abcdefg";
    char s2[] = "abcdefg";
    if (strcmp(s1,s2) == 0) {
        cout << "等しい！" << endl;
    }else {
        cout << "等しくない！" << endl;
    }
    return 0;
}