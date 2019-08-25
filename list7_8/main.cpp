#include <iostream>

using namespace std;

class Pupil {
private:
    string name;
    int point;
public:
    void speak();

    Pupil();

    Pupil(string name, int point);
};

void Pupil::speak() {
    cout << "氏名：" << this->name << endl;
    cout << "得点：" << this->point << endl;

}

Pupil::Pupil(string name, int point) {
    this->name = name;
    this->point = point;
}

Pupil::Pupil() {
    this->name = "未設定";
    this->point = 0;
}

int main() {
    Pupil p1;
    Pupil p2("山田一郎", 95);
    p1.speak();
    p2.speak();
    return 0;
}