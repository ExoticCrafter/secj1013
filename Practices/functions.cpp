#include <iostream>
#include <cmath>
#include <cctype>
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


  
  //Exercise 1
  char ch;
  cout << "Enter a statement contains either number or string" << endl;
  cin.get(ch);
  if (isalpha(ch))
    cout << "letter" << endl;
  else if (isdigit(ch))
    cout << "Digit" << endl;
  else
    cout << "special character" << endl;
  return 0;
}
