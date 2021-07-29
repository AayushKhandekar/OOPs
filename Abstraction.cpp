#include <iostream>
#include <math.h>
using namespace std;

class Add{

    private:
    int a, b;

    public:
    Add(int num1, int num2){

        a = num1;
        b = num2;
    }

    void display(){

        cout << a + b << endl;
    }
};

int main(){

    // Abstraction using Header File
    cout << pow(2,4) << endl;    

    // Abstraction using Classes
    Add a1(2,3);
    a1.display();

    return 0;
}