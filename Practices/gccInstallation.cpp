#include <iostream>

using namespace std;

void border(int n){
    for (int i = 0; i < n; i++){
        cout << "=";
    }
}
int main() {
    border(75);
    cout << "\n\nGCC telah berjaya dipasang\n" << endl;
    border(75-6);
    return 0;
}
