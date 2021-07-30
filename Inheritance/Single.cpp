#include <iostream>
using namespace std;

class Base{

    public:
    int numberOne = 10;
};

// Single Inheritance
class Derived : public Base{

    public:
    
    //Field
    int numberTwo = 20;

    public:

    // Method
    void display(){

        cout << "Sum : " << numberOne + numberTwo << endl;
    }
};

int main(){

    Derived d;

    // Inheriting Fields
    cout << "Number One : " << d.numberOne << endl;
    cout << "Number Two : " << d.numberTwo << endl;

    // Inheriting Methods
    d.display();

    return 0;
}