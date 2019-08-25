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

    PtrClass obj2;
    obj2.ptr[0] = 111;
    obj2.ptr[1] = 222;
    obj2.ptr[2] = 333;

    for (int i = 0; i < 3; i++) {
        cout << "obj2.ptr[" << i << "]の値:" << obj2.ptr[i] << endl;
    }
    obj2 = obj1;

    for (int i = 0; i < 3; i++) {
        cout << "obj1.ptr[" << i << "]の値:" << obj1.ptr[i] << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "obj2.ptr[" << i << "]の値:" << obj2.ptr[i] << endl;
    }


    return 0;
}