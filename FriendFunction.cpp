#include <iostream>
using namespace std;

class Friend {

    private:
    int id = 007;

    public:
    friend int print(string name , Friend);
};

int print(string name, Friend f){

    cout << "Hello World!" << endl;
    cout << "Hello! I am " << name << endl;
    cout << "ID : " << f.id << endl;
    return 0;
}

int main(){

    Friend f;
    print("Aayush Khandekar" , f);
    return 0;
}