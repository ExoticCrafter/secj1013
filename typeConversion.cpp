#include <iostream>
using namespace std;

int main() {
    
    //Conversion Rules
    char c = 'A'; cout << 6 + c << endl; //int

    int i = 25;
    cout << 6.1 + i << endl; //float

    int x, y = 25; float z = 2.5;
    x = y + z; //int 
    cout << x << endl;

    int y1 = 50, y2 = 63, x1 = 30, x2 = 40;

    cout << y2 - y1 / x2 - x1 << endl; //Division first because no parenthesis
    cout << (y2 - y1) / (x2 - x1) << endl; //Parenthesis is needed 

    cout << "---------" << endl;

    //Postfix and Prefix Expression
    int kira = 5;
    int nilai_pertama = 10, nilai_kedua;
    
    cout << kira << endl;
    nilai_kedua = 5 * kira-- + nilai_pertama;
    cout << kira << endl;
    cout << nilai_kedua << endl;
    cout << kira << endl;
    nilai_kedua = 5 * --kira + nilai_pertama;
    cout << kira << endl;
    cout << nilai_kedua << endl;

    cout << "---------" << endl;

    //Type Casting 
    double m;
    m = (y2 - y1) / (x2 - x1); //The output is an integer because the operation is performed using int data type, even though m is a double. This causes data loss since the fractional part is discarded.
    m = static_cast<double> (y2 - y1) / (x2 - x1); 
    cout << "The value of m is: " << m << endl;

    char ch = 'C';
    cout << ch << " is " << static_cast<int> (ch) << endl;
    cout << ch << " is " << (int)ch << endl;
    cout << ch << " is " << int(ch) << endl;

    cout << "---------" << endl;    
    
    //Combined Assignment Opeerators
    int a = 1;
    double d = 1.0;

    a = 46 / 9;
    a = 46 % 9 + 4 * 4 - 2;
    a = 45 + 43 % 5 * (23 * 3 % 2);
    a %= 3 / a + 3;
    d += 1.5 * 3 + (++a);
    d -= 1.5 * 3 + a++;

    cout << a << endl;
    cout << d << endl;

    return 0;
} 
