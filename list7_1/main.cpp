#include <iostream>

using namespace std;

class Human {
protected:
    string name;
public:
    void speak();

    void speakWithDecoration();

    Human(string name);
};

void Human::speak() {
    cout << "氏名：" << this->name << endl;
}

void Human::speakWithDecoration() {
    cout << "★★★★★★★★★★★" << endl;
    this->speak();
    cout << "★★★★★★★★★★★" << endl;
}

Human::Human(string name) {
    this->name = name;
}

class Student : public Human {
protected:
    string number;
public:
    Student(string name, string number);
};

Student::Student(string name, string number) : Human(name) {
    this->number = number;
}

int main() {
    Student yamada("山田一郎", "ABC123456");
    yamada.speakWithDecoration();
    return 0;
}