#include <iostream>

using namespace std;

void changeName(char names[][25], int size);

int main() {
    char friends[5][25] = {
        "Ali", 
        "Boba", 
        "Cicak", 
        "Dora", 
        "Emylee"
    };

    cout << "My 5 friends" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << friends[i] << endl;
    }

    changeName(friends, 5);

    cout << "\nNew List of Friends" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << friends[i] << endl;
    }

    return 0;
}


void changeName(char names[][25], int size) {
    cout << "\n--- Changing Names ---" << endl;
    

    for (int i = 0; i < size; i++) {
        cout << "Enter new name for friend " << (i + 1) << ": ";
        
        cin >> names[i]; 
    }
}