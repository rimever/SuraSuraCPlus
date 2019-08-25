#include <iostream>
#include <string>
using namespace std;

int main() {
    int channel;
    string stationName;

    cout << "チャンネル番号を入力してください:";
    cin >> channel;
    if (channel == 1) {
        stationName = "NHK総合";
    }else if (channel == 3) {
        stationName = "NHK教育";
    }else if (channel == 4) {
        stationName = "日本テレビ";
    }else if (channel == 6) {
        stationName = "TBSテレビ";
    }else if (channel == 8) {
        stationName = "フジテレビ";
    }else if (channel == 10) {
        stationName = "テレビ朝日";
    }else if (channel == 12) {
        stationName = "テレビ東京";
    }else {
        stationName = "割り当てなし";
    }
    cout << stationName << endl;

    return 0;
}