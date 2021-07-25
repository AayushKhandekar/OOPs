#include <iostream>
using namespace std;

enum directions {North, South, East, West};

int main(){

    directions dirNo;
    dirNo = West;
    cout << "Dir : " << dirNo + 1 << endl;
    return 0;
}