#include <iostream>
using namespace std;

class student{

    public:
    static int count;
    static int rateOfInterest; 
    string name;

    student(string name){

        this->name = name;
        count ++;
    }

    void display(){

        cout << "Name : " << name << " and ROI : " << rateOfInterest << endl;
    }
};

int student::rateOfInterest = 10;
int student::count = 0;

int main(){

    student s1 = student("John Doe");
    student s2 = student("Alice");

    s1.display();
    s2.display();

    cout << "Count : " << student::count << endl;
};
