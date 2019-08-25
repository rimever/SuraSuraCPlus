#include <iostream>
#include <queue>
#include <stack>

using namespace std;
int main() {
    queue<string> q;
    q.push("データ1");
    q.push("データ2");
    q.push("データ3");
    cout << "***** キュー *****" << endl;
    while(!q.empty()) {
        cout << q.front() << endl;
        q.pop();
    }
    stack<string> s;
    s.push("データ1");
    s.push("データ2");
    s.push("データ3");
    cout << "***** スタック *****" << endl;
    while(!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}