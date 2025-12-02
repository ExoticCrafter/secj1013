#include <iostream>

using namespace std;

int calcSum(int n1, int n2){
    int sum;
    return sum = n1 + n2;
}
int calcDiff(int n1, int n2){
    int diff = n1 - n2;
    return diff;
}

int main(){
    int num1, num2;
    cout << "Enter two integers:\t";
    cin >> num1 >> num2;

    calcSum(num1, num2);

    cout << "Sum:\t" << calcSum << endl;
    cout << "Difference:\t" << calcDiff << endl;
    return 0;

}
