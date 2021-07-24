#include <iostream>
using namespace std;

class Person { 

    private:
    string name;

    public:
    
    // Parameterized Constructor
    Person(string nameTemp) {
        name = nameTemp;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy Constructor
    Person(Person &i) {
        name = i.name;
        cout << "Copy Constructor called" << endl;
    }

    int getName() {
        cout << name << endl;
        return 0;
    }

};

int main() {

    cout << "First Executed" << endl;
    
    // Second Executed --> Parameterized Constructor
    Person p1("Aayush"); 
    
    // Third Execution --> Copy Constructor is called
    Person p2(p1);
    p2.getName();

    // Another way to implement Copy Constructor
    Person p3 = p2;
    p3.getName();
    return 0;
}