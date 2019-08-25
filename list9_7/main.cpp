#include <iostream>

using namespace std;

int main() {
    int n;
    try {
        cout << "1.int型の例外、2.double型の例外、3.string型の例外：";
        cin >> n;
        if (n == 1) throw -1;
        if (n == 2) throw -123.456;
        if (n == 3) throw string("文字列");
    } catch (int intEx) {
        cout << "int型の例外：" << intEx << endl;
    } catch (double dblEx) {
        cout << "double型の例外" << dblEx << endl;
    } catch (string strEx) {
        cout << "string型の例外" << strEx << endl;
    } catch (...) {
        cout << "例外です！" << endl;
    }

    return 0;
}