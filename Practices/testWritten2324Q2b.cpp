#include <iostream>
using namespace std;

int main(){
    char choice;
    int counter;
    bool flag = 0;

    cout << "Enter choice\t:";
    cin >> choice;
    cout << "\nEnter counter\t:";
    cin >> counter;

    while (!flag && (counter % 2)==0)
    {
        if ((choice !='a') && (choice != 'b') && (choice != 'c')){
            counter +=3;
            flag = 0;
        }
        else {
            flag = 1;
            counter *= 3;
        }
    for (int i =0; i < counter; i++){
        switch ((choice)){
            case 'a': ++i; cout << "One\n";
                    break;
            case 'b': i+=2; cout << "Two\n";
                    break;
            case 'c': i+=3; cout << "Three\n";
                    break;
            default: i+=4; cout<< "Four\n";
                    break;

        }
    }
    }
    return 0;
}