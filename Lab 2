#include <iostream>
using namespace std;

int main() {
    int x, sum =0, digit;
    cout << "Enter an integer number:\t";
    cin >> x;

    while (x > 0){
        digit = x % 10;
        sum += digit;
        x /= 10;
        cout << digit;
        if (x > 0)
            cout << " + "; //plus sign
    }
    cout << " = " << sum << endl;
    if (sum % 2 == 0)
        cout << sum << " is an even number";
    else if (sum %2 != 0)
        cout << sum << " is an odd number";
    if (sum % 4 == 0) {
        cout <<", multiples of 4";
        if (sum % 5 == 0) //untuk letak "and 5"
            cout <<" and 5";
    }
    else if (sum % 5 == 0) //multiple of 5 sahaja
        cout <<"& multiples of 5";
        
    return 0;
}
