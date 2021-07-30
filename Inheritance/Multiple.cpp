#include <iostream>
using namespace std;

class BaseClassOne{

    protected:
    int numOne = 10;

    // Field
    public:
    int num = 50;

    void print(){
        
        cout << "Base Class One" << endl;
    }
};

class BaseClassTwo{

    protected:
    int numTwo = 20;

    public:
    void print(){
        
        cout << "Base Class One" << endl;
    }
};

// Multilevel Inheritance
class Derived : public BaseClassOne, public BaseClassTwo{

    public:

    // Method
    void add(){

        cout << "Sum : " << numOne + numTwo << endl;
    }

    // Ambiguity occurs when there are two methods with the same names
    void view(){

        // Use the scope resolution operator to solve ambiguity
        BaseClassOne :: print();
    }
};

int main(){

    Derived d;

    // Inheriting Field
    cout << d.num << endl;

    // Protected Fields cannot be accessed from outside the base and derived class

    // Inheriting Method
    d.add();

    // Ambiguity
    d.view();

    return 0;
}