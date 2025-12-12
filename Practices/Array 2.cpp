/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    const int SIZE = 12;
    double rainfall[SIZE];
    double lowest;
    double highest;
    //cout << "Please enter rainfall for each month:\n";
    for (int i = 0; i < SIZE; i++){
        cout << "Please enter rainfall for "<< (i+1) << "'s month:\n";
        cin >> rainfall[i];
    }
    lowest = rainfall[0];
    highest = rainfall[0];
    double sum = 0;
    
    for (int i =0; i < SIZE; i++){
        if (rainfall[i] > highest)
            highest = rainfall[i];
        if (rainfall[i] < lowest)
            lowest= rainfall[i];
        sum += rainfall[i];
    }
    double avg = (sum/SIZE);
    cout << "Highest\t:" << highest << endl;
    cout << "Lowest\t:" << lowest << endl;
    cout << "Total\t:" << sum << endl;
    cout << "Average\t:" << avg << endl;
    return 0;
}