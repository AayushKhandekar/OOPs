#include <iostream>
using namespace std;

class Student{

    public:
    Student(){
        
        cout << "Constructor Invoked!" << endl;
    }

    ~Student(){

        cout << "Destructor Invoked!" << endl;
    }
};

int main(){

    Student s1;
}