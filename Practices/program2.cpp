// Mid Term Test

// Program 2
// Student's name: ______________________________ Matric Number:_____________________

#include <iostream>
#include <cmath>
using namespace std;


//? function çurrency_menu  is fully given. Do nothing in it.
//?   The function is to display the options of foreign currencies for 
//?   the user to choose from


char currency_menu()
{
    char code = 0;
    cout << endl;
    cout << "Pick a currency to convert from:" << endl;
    cout << "I. Indonesian Rupiah (IDR)" << endl;
    cout << "B. Bangladeshi Taka  (BDT)" << endl;
    cout << "C. Chinese Yuan  (EGP)" << endl
         << endl;
    cout << "Choose a code =>";
    cin >> code;
    return code;
}

int main()
{

    cout << endl;
    system("pause"); //? comment this line out should you DevC++
    return 0;
}
