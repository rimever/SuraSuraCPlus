class Counter {
protected:
    int val;
public:
    void resetVal();

    void upVal();

    int getVal();

    Counter();
};

void Counter::resetVal() {
    this->val = 0;
}

void Counter::upVal() {
    this->val++;

}

int Counter::getVal() {
    return this->val;
}

Counter::Counter() {
    resetVal();
}
