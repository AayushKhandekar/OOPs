#include <iostream>
using namespace std;

class Student {

    public:
    string name;
    int id;

    // Default Constructor is invoked without being called by the user.
    Student(){

        cout << "Default Constructor invoked!" << endl;
    }

    // Parameterized Constructor
    Student(string NAME, int ID){

        name = NAME;
        id = ID;
    }

    void print(){

        cout << "Name : " << name << " and ID : " << id << endl;
        cout << endl;
    }
};

int main(){

    Student s1;
    Student s2 = Student("John Doe", 1);

    // Default value for string is " " and for int is garbage or random.
    s1.print(); 
    s2.print();
    
    return 0;
}