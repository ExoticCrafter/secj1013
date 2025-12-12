/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 10;
    int num[SIZE];
    int smallest;
    int largest;
    
    for (int i = 0; i < 10; i++){
        cin >> num[i];
    }
    
    smallest = num[0];
    largest = num[0];
    
    for (int i =0 ; i < SIZE ; i++){
        if (num[i]> largest)
            largest = num[i];
        if (num[i] < smallest)
            smallest = num[i];
    }
    cout << "Largest\t" << largest <<endl;
    cout << "Smallest\t" << smallest << endl;
    return 0;
}