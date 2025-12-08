// PROGRAM 1      //! do not remove this line

// Mid Term Test SECJ1013  MOCK TEST 2 

// Student's name: MUHAMMAD HAFIZ BIN SUHAILI Matric Number: A25CS0106

#include <iostream>
using namespace std;


// (a)
int sum(int m, int n)
{
    int total = 0;
    for (m; m < n; m++){
        total += m;
    }
    return total + n;
}

// (b)
void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a, b,c ;
    
    // (c)
    cout << "Enter two numbers=> ";
    cin >> a >> b;

    // (d)
    if (!(a < b))
        swap(a, b);

    // (e)
    c = sum(a, b);
    
    // (f)
    cout << "The sum is " << c << endl;

    4
    return 0;
}
