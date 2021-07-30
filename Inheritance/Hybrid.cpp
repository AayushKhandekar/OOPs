#include <iostream>
using namespace std;

class Base{

    protected:
    int num1 = 1;
};

class DerivedOne: public Base{

    protected:
    int num2 = 2;
};

class DerivedTwo{

    protected:
    int num3 = 3;
};

class DerivedThree: public DerivedOne, public DerivedTwo{

    protected:
    int num4 = 4;

    public:

    void print(){

        cout << num1 + num2 + num3 + num4 << endl;
    }
};

int main(){

    DerivedThree d;
    d.print();
    return 0;
}