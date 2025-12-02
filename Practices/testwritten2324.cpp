#include <iostream>
using namespace std;

int main() {
    int a, b= 2, c, d=1, e=0;
    float p =3.0, q =0.0;
    char x = '1', y='A', z='?';
    bool m = 0;

    if (b>m)
        m=b;
    else
        m=d;

    if (b >e)
        e=e+2;
    else
        a=b;
    q= static_cast<float>(e/5) * d ;
    p = static_cast<float>(b*d--);
    c = ++a/2+e;

    if (x==1)
        m=1;
    else
        y='D';
    cout << a << endl;
    cout << b << endl;
    cout << p << endl;
    cout << q << endl;
    cout << y << endl;
    

    return 0;
}