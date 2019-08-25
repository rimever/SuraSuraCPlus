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

    PtrClass(const PtrClass &obj) {
        cout << "コピーコンストラクタが呼び出されました。" << endl;
        this->ptr = new int[3];
        this->ptr[0] = obj.ptr[0];
        this->ptr[1] = obj.ptr[1];
        this->ptr[2] = obj.ptr[2];
    }
};

int main() {
    PtrClass obj1;
    obj1.ptr[0] = 123;
    obj1.ptr[1] = 456;
    obj1.ptr[2] = 789;

    PtrClass obj2 = obj1;

    cout << "obj1のメンバ変数ptrの値:" << obj1.ptr << endl;
    for (int i = 0; i < 3; i++) {
        cout << "obj1[" << i << "]の値:" << obj1.ptr[i] << endl;
    }
    cout << "obj2のメンバ変数ptrの値:" << obj2.ptr << endl;
    for (int i = 0; i < 3; i++) {
        cout << "obj2[" << i << "]の値:" << obj2.ptr[i] << endl;
    }

}