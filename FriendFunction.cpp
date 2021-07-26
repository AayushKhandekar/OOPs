#include <iostream>
using namespace std;

class FriendClass {

    private:
    int id = 7;

    protected:
    int number = 10;

    public:
    friend int print(string name , FriendClass);
};

// Passing an object to the Friend Function
int print(string name, FriendClass f){

    cout << "Name : " << name << endl;
    cout << "ID : " << f.id << endl;
    cout << "Numebr : " << f.number << endl;
    return 0;
}

int main(){

    FriendClass f;

    // Friend Function Call
    print("John Doe" , f);
    return 0;
}