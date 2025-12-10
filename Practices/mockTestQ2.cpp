// PROGRAM 2      //! do not remove this line

// Mid Term Test SECJ1013  MOCK TEST 2 

//* Student's name: MUHAMMAD HAFIZ BIN SUHAILI    Matric Number: A25CS0106

#include <iostream>
#include <iomanip> // For formatting the output to 2 decimal places
using namespace std;

// ----------------------------------------------------------------------
//? Requirement (e)(i): Function to determine the item's price based on its code
// [cite: 405, 407]
// ----------------------------------------------------------------------
double getItemPrice(int code) {
    switch (code) {
        case 101: return 9.90;
        case 201: return 6.90;
        case 305: return 7.99;
        case 404: return 5.99;
        default: return 0.0; // Should not happen given validation, but safe default
    }
}

// ----------------------------------------------------------------------
// Requirement (e)(ii): Function to get user inputs for the item's code
//? This function strictly accepts only 101, 201, 305, 404, and 0.
// 
// ----------------------------------------------------------------------
int getInputCode() {
    int code;
    while (true) {
        cout << "Enter item's code => ";
        cin >> code;

        // Check if the code is one of the valid item codes or the exit signal (0)
        if (code == 101 || code == 201 || code == 305 || code == 404 || code == 0) {
            return code;
        } 
        else
            cout << "Invalid code. Please try again!" << endl;
    }
}

int main() {
    int itemCode;
    int quantity;
    double totalAmount = 0.0;

    //? Requirement (c): The cashier can continue entering multiple items until code 0 is entered.
    // [cite: 400]
    while (true) {
        // Call the validation function to get a code
        itemCode = getInputCode();

        //? Requirement (e)(ii): Code 0 signals the conclusion.
        // 
        if (itemCode == 0) {
            break; 
        }

        //? Requirement (a): The cashier enters the quantity purchased.
        // 
        cout << "Enter amount of items => ";
        cin >> quantity;

        //? Requirement (b): Determine the item's price.
        // [cite: 398]
        double price = getItemPrice(itemCode);

        //? Calculate subtotal for this item and add to total
        totalAmount += (price * quantity);
    }

    // Requirement (d): Calculate and display the total amount.
    // 
    cout << fixed << setprecision(2); // Format to 2 decimal places (e.g., 139.49)
    cout << "Total amount to pay: RM " << totalAmount << endl;

    return 0;
}
