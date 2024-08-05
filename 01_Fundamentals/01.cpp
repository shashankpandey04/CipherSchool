#include <iostream>
using namespace std;
int main(){
    int a = 1;
    cout << "Size of Integer: " << sizeof(a) << endl;
    int b = 2;
    cout << "Value before:" << a << endl;
    cout << a++ << endl;
    cout << "Value after:" << a << endl;
    bool status = a != b;
    cout << status;
    cout << (a & b);
    return 0;
}