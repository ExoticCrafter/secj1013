// Mid Term Test

// Program 2

#include <iostream>
#include <cmath> // Required for ceil() function
#include <string>
using namespace std;

// ---------------------------------------------------------
// Task 1: Define constants for currency symbols and rates
// [cite: 204] Table 2: Currency and Exchange Rate
// ---------------------------------------------------------
const float RATE_IDR = 0.000286;
const float RATE_BDT = 0.0378;
const float RATE_CNY = 0.62;

// ---------------------------------------------------------
// Task 3: Define a function to return the value of a banknote
// [cite: 207] Table 3: Malaysian Banknotes
// ---------------------------------------------------------
int getBanknoteValue(char code) {
    switch (toupper(code)) {
        case 'A': return 100;
        case 'B': return 50;
        case 'C': return 20;
        case 'D': return 10;
        case 'E': return 5;
        case 'F': return 1;
        default: return 0;
    }
}

// ---------------------------------------------------------
// Task 2: Define a function that returns the code of a banknote
// [cite: 211-215]
// ---------------------------------------------------------
char getBanknoteCode(int amount) {
    char code;
    cout << "How would you like your money?" << endl;
    
    // Display banknotes less than or equal to the amount
    if (amount >= 100) cout << "A. MYR 100" << endl;
    if (amount >= 50)  cout << "B. MYR 50" << endl;
    if (amount >= 20)  cout << "C. MYR 20" << endl;
    if (amount >= 10)  cout << "D. MYR 10" << endl;
    if (amount >= 5)   cout << "E. MYR 5" << endl;
    if (amount >= 1)   cout << "F. MYR 1" << endl;
    
    cout << "Choose a bank note => ";
    cin >> code;
    return code;
}

//? function currency_menu is fully given. Do nothing in it.
char currency_menu()
{
    char code = 0;
    cout << endl;
    cout << "Pick a currency to convert from:" << endl;
    cout << "I. Indonesian Rupiah (IDR)" << endl;
    cout << "B. Bangladeshi Taka  (BDT)" << endl;
    cout << "C. Chinese Yuan  (CNY)" << endl // Fixed typo in starter code (EGP -> CNY)
         << endl;
    cout << "Choose a code => ";
    cin >> code;
    return code;
}

int main()
{
    // Variables for Main Logic
    char currencyCode;
    float exchangeRate = 0.0;
    double foreignAmount, convertedAmount;
    int myrBalance;

    // ---------------------------------------------------------
    // Task 4a & 4b: Select currency and determine rate
    // [cite: 221-222]
    // ---------------------------------------------------------
    currencyCode = currency_menu();

    // Determine exchange rate based on user input
    // Using toupper to handle lowercase input gracefully
    switch (toupper(currencyCode)) {
        case 'I':
            exchangeRate = RATE_IDR;
            break;
        case 'B':
            exchangeRate = RATE_BDT;
            break;
        case 'C':
            exchangeRate = RATE_CNY;
            break;
        default:
            cout << "Invalid currency code selected." << endl;
            return 1; // Exit if invalid
    }

    // ---------------------------------------------------------
    // Task 4c: Ask user for amount in foreign currency
    // [cite: 226]
    // ---------------------------------------------------------
    string currencyName = (toupper(currencyCode) == 'I') ? "IDR" : (toupper(currencyCode) == 'B' ? "BDT" : "CNY");
    cout << "Enter the amount of money in your original currency " << currencyName << " => ";
    cin >> foreignAmount;

    // ---------------------------------------------------------
    // Task 4d: Display converted amount (Original and Rounded)
    // [cite: 227-229]
    // ---------------------------------------------------------
    convertedAmount = foreignAmount * exchangeRate;
    
    // Use ceil() from <cmath> to round up as per requirement (5.68->6.0, 5.0->5.0)
    myrBalance = (int)ceil(convertedAmount); 

    cout << "Your conversion money is MYR " << convertedAmount << endl;
    cout << "You will get MYR " << myrBalance << endl;
    cout << endl;

    // ---------------------------------------------------------
    // Task 4e: Loop to select banknotes until balance is zero
    // 
    // ---------------------------------------------------------
    while (myrBalance > 0) {
        // 1. Get user choice for banknote
        char noteChoice = getBanknoteCode(myrBalance);
        
        // 2. Get value of the chosen note
        int noteValue = getBanknoteValue(noteChoice);
        
        // Validation check to ensure noteValue isn't 0 or larger than balance
        // (Though the logic implies we dispense as many as fit, standard vending logic)
        if (noteValue > 0 && noteValue <= myrBalance) {
            
            // Calculate how many of this note can be dispensed
            // Based on Figure 2 output, if user picks 100 and balance is 2828, 
            // the system dispenses 28 notes (2800).
            int count = myrBalance / noteValue; 
            int totalDeduction = count * noteValue;
            
            cout << "Your money in bank note MYR " << noteValue 
                 << ": " << noteValue << " x " << count 
                 << " = MYR " << totalDeduction << endl;
            
            // Update balance
            myrBalance -= totalDeduction;
            
            if (myrBalance > 0) {
                cout << "You still have a balance of MYR " << myrBalance << endl;
            }
        } else {
            cout << "Invalid selection or note value too high for remaining balance." << endl;
        }
        cout << endl;
    }

    cout << "There you go. You have all your money back" << endl;
    cout << "Have a nice day!" << endl;

    cout << endl;
    system("pause"); 
    return 0;
}