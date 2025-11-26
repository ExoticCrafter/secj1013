#include <iostream>
using namespace std;

int sum(int no1, int no2){
    int sumAns;
    sumAns = no1 + no2;
    return sumAns;
}
int diff(int no1, int no2){
    int diffAns;
    diffAns = no1 - no2;
    return diffAns;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;


    cout << "Sum: " << sum(num1, num2) << endl;
    cout << "Difference: " << diff(num1, num2) << endl;

    return 0;
}

