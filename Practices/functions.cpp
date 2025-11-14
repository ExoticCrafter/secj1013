#include <iostream>
#include <cmath>

using namespace std;

int main(){
  double area, radius;
  int num1, num2;
  cout << "What is the radius?\t";
  cin >> radius
  area = 3.142 * pow(radius,2.0);
  cout << "The area is " << area << endl;

  cout << "Enter two numbers to square root" <<endl;
  cin >> num1, num2;
  float sqrtAns = sqrt(num1 + num2);
  cout << "The square root of " << num1+num2 << "is " << sqrtAns <<endl;

  
  return 0;
}
