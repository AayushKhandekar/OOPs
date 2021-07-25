#include <iostream>
using namespace std;

// A class is a template or a blueprint. It can be thought as a concept and an object is the implementation of that concept.

class Student{

    public: // Access Specifier
    string name; // Data Member or Instance Varibale or Attribute
    int id;

    int initialize(string Name, int ID ){

        name = Name;
        id = ID;
        return 0;
    }

    int print(){

        cout << "Printing from the Class Function!" << endl;
        cout << "Student Name : "<< name << " and Student ID : " << id << endl;
        cout << endl;
        return 0;
    }
};

int main(){

    // Creating an Object. At this point, a default constructor is also created. 
    Student s1; 

    // Initializing the name attribute of the s1 object.
    s1.name = "John Doe"; 
    s1.id = 1;

    s1.print();

    cout << "Printing from the Main Function!" << endl;
    cout <<  "Student Name : "<< s1.name << " and Student ID : " << s1.id << endl;
    cout << endl;

    // Initializing the class attributes using a class method.
    s1.initialize("John Doe", 1234);
    s1.print();
    return 0;
}