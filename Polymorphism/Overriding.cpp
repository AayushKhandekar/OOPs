#include <iostream>
using namespace std;

class A{

    public: 

    void display(){

        cout << "Display through class A" << endl;
    }
};

class B: public A{

    public:
    
    void display(){
        
        cout << "Display through class B" << endl;
    }  
};

int main(){

    B b1;
    b1.display();

    A a1;
    a1.display();
    return 0;
}