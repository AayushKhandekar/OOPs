#include <iostream>
using namespace std;

class A{

    public:

    void display(int num){

        cout << num << endl;
    }

    void display(int numOne, int numTwo){

        cout << numOne << " " << numTwo << endl;
    }
};

int main(){

    A a1;

    a1.display(2,4);
    return 0;
}