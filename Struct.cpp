#include <iostream>
using namespace std;

struct Student{

    string name;
    int rollNumber;

    Student(){

        cout << "Default Constructor invoked!" << endl;
    }

    Student(int id){

        cout << "Parameterized Constructor invoked!" << endl;
        rollNumber = id;
    }

    void display(){

        cout << rollNumber << endl;
    }
};

int main(){

    struct Student s1 = Student(24);
    s1.name = "John Doe";
    cout << s1.name << endl;
    s1.display();
    return 0;
}