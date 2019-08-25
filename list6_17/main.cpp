#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
public:
    virtual void speak() = 0;
    Animal(string name);
};

Animal::Animal(string name) {
this->name = name;
}

class Dog:public Animal {
public:
    void speak();
    Dog(string name);
};

void Dog::speak() {
cout << this->name << "：ワン！" << endl;
}

Dog::Dog(string name) : Animal(name) {

}

class Cat:public Animal {
public:
    void speak();
    Cat(string name);
};

void Cat::speak() {
    cout << this->name << "：ニャン！" << endl;
}

Cat::Cat(string name) : Animal(name) {

}

void sub(Animal *p) {
    p->speak();
}

int main() {
    const int DATA_NUM = 5;
    Animal *p[DATA_NUM];
    p[0] = new Dog("ポチ");
    p[1] = new Cat("タマ");
    p[2] = new Dog("シロ");
    p[3] = new Cat("ミケ");
    p[4] = new Dog("クロ");

    for (int i = 0; i < DATA_NUM; i++) {
        p[i]->speak();
        delete p[i];
    }

    return 0;
}