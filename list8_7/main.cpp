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

    // 独自の代入演算子のオーバーロード
    PtrClass &operator=(const PtrClass &obj) {
        cout << "代入演算子のオーバーロードが呼び出されました。" << endl;
        this->ptr[0] = obj.ptr[0];
        this->ptr[1] = obj.ptr[1];
        this->ptr[2] = obj.ptr[2];
        return *this;
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

    cout << "obj2のメンバ変数ptrの値(代入前):" << obj2.ptr << endl;
    cout << "obj2.ptr[0]の値:" << obj2.ptr[0] << endl;
    cout << "obj2.ptr[1]の値:" << obj2.ptr[1] << endl;
    cout << "obj2.ptr[2]の値:" << obj2.ptr[2] << endl;

    obj2 = obj1;

    cout << "obj1のメンバ変数ptrの値(代入後):" << obj1.ptr << endl;
    cout << "obj1.ptr[0]の値:" << obj1.ptr[0] << endl;
    cout << "obj1.ptr[1]の値:" << obj1.ptr[1] << endl;
    cout << "obj1.ptr[2]の値:" << obj1.ptr[2] << endl;

    cout << "obj2のメンバ変数ptrの値(代入前):" << obj2.ptr << endl;
    cout << "obj2.ptr[0]の値:" << obj2.ptr[0] << endl;
    cout << "obj2.ptr[1]の値:" << obj2.ptr[1] << endl;
    cout << "obj2.ptr[2]の値:" << obj2.ptr[2] << endl;

    return 0;
}