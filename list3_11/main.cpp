#include <iostream>

using namespace std;

int main() {
    const int DATA_NUM = 10;
    int point[DATA_NUM] = {85, 62, 63, 45, 100, 98, 52, 88, 74, 65};
    int i;
    int data;
    int pos = -1;
    cout << "見つける得点:";
    cin >> data;

    for (i = 0; i < DATA_NUM; i++) {
        if (point[i] == data) {
            pos = i;
            break;
        }
    }
    if (pos == -1) {
        cout << "見つかりません。" << endl;
    } else {
        cout << pos << "番目に見つかりました。" << endl;
    }
    return 0;
}