#include <iostream>

using namespace std;

class MyClass {
private:
    int data;
public:
    int getData() {
        return this->data;
    }

    MyClass(int data) {
        cout << "コンストラクタが呼び出されました。" << endl;
        this->data = data;
    }

    ~MyClass() {
        cout << "デストラクタが呼び出されました。" << endl;
    }

    MyClass(const MyClass &obj) {
        cout << "コピーコンストラクタが呼び出されました。" << endl;
        this->data = obj.data;
    }
};

int main() {
    MyClass obj1(123);
    MyClass obj2 = obj1;
    MyClass *obj3 = &obj1;

    cout << "obj1のメンバ変数のdataの値:" << obj1.getData() << endl;
    cout << "obj2のメンバ変数のdataの値:" << obj2.getData() << endl;
    cout << "obj3のメンバ変数のdataの値:" << obj3->getData() << endl;

    return 0;
}