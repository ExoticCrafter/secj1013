#include <iostream>
#include <string>
#include <iomanip> // Added for better formatting logic, though not strictly required if default floats match
using namespace std;

// Error 2: Function return type should be int, not void, as it returns a value [cite: 60]
int displayMenu() {
    cout << "----------------------------------\n";
    cout << "Car Rental Program\n";
    cout << "----------------------------------\n";
    cout << "Choose the following options.\n";
    cout << "1. Display list of available car.\n";
    cout << "2. Rent a car.\n";
    cout << "3. Exit Program.\n";
    cout << "----------------------------------\n";
    
    int option;
    cout << "Option : " ;
    cin >> option;

    // Error 3: Logic error in validation. Should loop if option is less than 1 OR greater than 3 [cite: 60]
    while (option < 1 || option > 3) {
        cout << "Invalid option! Enter valid option (1,2,3) : ";
        cin >> option;
    }
    // Error 1: Variable name case mismatch. 'Option' should be 'option' [cite: 65]
    return option;
}

void displayCar() {
    cout << "\n-------------------------------------\n";
    cout << "List of available car\n";
    cout << "-------------------------------------\n";
    cout << "No.\tModel\t\tRate Per Hour\n";
    cout << "1.\tHonda Civic\tRm10.00\n";
    cout << "2.\tProton X70\tRm15.00\n";
    cout << "3.\tToyota Yaris\tRm7.00\n";
    cout << "4.\tPerodua Axia\tRm5.00\n";
    cout << "-------------------------------------\n";
}

void displayRentalRate() {
    cout << "The following rental rate calculation is as follows :\n";
    cout << "- Normal rate for the first 12 hours.\n";
    cout << "- Next 12 hours, the rate increase by 2%.\n";
    cout << "- After 24 hours, the rate increase by 5%\n\n";
}

// Error 4: Return type must be float to return rentRate.
// Error 5: carModel parameter must be int to match the switch cases (1, 2, 3) [cite: 60]
float calcRentCar(int carModel, float hourRate) {
    float modelRate, rentRate;

    switch (carModel) {
        case 1:
            modelRate = 10.00;
            break;
        case 2:
            modelRate = 15.00;
            break;
        case 3:
            modelRate = 7.00;
            break;
        default:
            modelRate = 5.00;
    }

    if (hourRate < 12) {
      rentRate = hourRate * modelRate;
    } else if (hourRate <= 24) {
      rentRate = (12 * modelRate) + ((hourRate - 12) * (modelRate * 1.02 ));
    } else {
      // Error 6: Logic error in calculation. Middle tier is 12 hours, and last tier is (hour - 24) [cite: 167]
      rentRate = (12 * modelRate) + (12 * (modelRate * 1.02)) + ((hourRate - 24) * (modelRate * 1.05));
    }

    return rentRate;
}

int main() {
    char repeat = 'y';
    int choice;
    
    do {
        // Error 7: Function call error. displayMenu() does not take arguments [cite: 60]
        choice = displayMenu();
        
        if (choice == 1) {
            displayCar();

        } else if (choice == 2) {
            
            displayCar();
            displayRentalRate();
            int car, hour;
            char name[20];
            string model;
            
            cout << "Enter your name : " ;
            cin >> name;
            cout << "Choose car model no. : " ;
            cin >> car;
            
            // Error 8: Logic error in validation loop. Should loop if car < 1 OR car > 4 [cite: 65]
            while (car < 1 || car > 4) {
                cout << "Invalid option! Choose valid car model no. (1,2,3,4) : ";
                cin >> car;
            }
            
            switch (car) {
                case 1:
                    model = "Honda Civic";
                    break;
                case 2:
                    model = "Proton X70";
                    break;
                case 3:
                    model = "Toyota Yaris";
                    break;
                default:
                    model = "Perodua Axia";
            }
            
            cout << "Enter hour(s) to rent : " ;
            cin >> hour;
            
            // Error 9: Variable scope/Naming error. passed 'car' and 'hour', not 'carModel' and 'hourRate' [cite: 65]
            float rent = calcRentCar(car, hour);
            
            cout << "\n---------------------------\n";
            cout << "Rental Details  \n";
            cout << "---------------------------\n";
            cout << "Name : " << name << "\n";
            cout << "Car model : " << model << "\n";
            cout << "Hour(s) rent : " << hour << "\n";
            cout << "Total rent : RM" << rent << "\n";
            cout << "---------------------------\n";
            
        } else {
            break;
        }
        
        cout << "\nEnter 'y' to continue and 'n' to exit the program : ";
        cin >> repeat;
        cout << endl;

    // Error 10: Logic error. Loop should continue on 'y' or 'Y'. Original checked 'Y' but init was 'y' [cite: 118, 128]
    } while (repeat == 'y' || repeat == 'Y');
    
    cout << "Program End.";
    system("pause");
    
    return 0;
}

// Mid Term Test

// Program 1
// Student's name: [INSERT NAME] Matric Number: [INSERT MATRIC]