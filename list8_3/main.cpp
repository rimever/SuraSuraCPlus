#include <iostream>

using namespace std;

class PtrClass {
public:
    int *ptr;
    PtrClass() {
        cout << "コンストラクタが呼び出されました。" << endl;
        this->ptr = new int[3];
    }
    ~PtrClass() {
        cout << "デストラクタが呼び出されました。" << endl;
        delete[] ptr;
    }
};

int main() {
    PtrClass obj1;
    obj1.ptr[0] = 123;
    obj1.ptr[1] = 456;
    obj1.ptr[2] = 789;

    PtrClass obj2 = obj1;

    //エラー発生するコード
}