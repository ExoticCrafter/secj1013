#include <iostream>
using namespace std;

void f(int n) {
    cout << "Inside f(int), the valued of the parameter is " << n << endl; //612
    n += 37;
    cout << "Inside f(int), the modified parameter is now " << n << endl; //649
}

int main() {
    int m = 612;

    cout << "\nThe integer m = " << m << endl;
    cout<< "calling f(m)..." << endl;
    f(m);
    cout << "The integer m =" << m << endl; //still 612
    return 0;
}