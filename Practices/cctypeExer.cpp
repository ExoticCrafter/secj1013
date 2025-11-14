//Example C++ code demonstrating manual implementations of common tasks
//that can be replaced with standard library functions.

#include <iostream>
#include <cmath>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    // 1. Calculate square root manually (Newton's Method)
    double num, guess;
    cout << "Enter a number: ";
    cin >> num;
  
    /*
    double guess = num / 2;
    for (int i = 0; i < 10; i++) {
        guess = (guess + num / guess) / 2;
    }
    cout << "Manual square root = " << guess << endl;
    */

    //Replace Newton’s method with → sqrt(x) from <cmath> below
    guess = sqrt(num);
    cout << "The square root of " << num << " is " << guess << endl;


    // 2. Check if a character is uppercase or lowercase (manual check)
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    /*
    if (ch >= 'A' && ch <= 'Z')
        cout << "Uppercase letter" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "Lowercase letter" << endl;
    else
        cout << "Not a letter" << endl;
    */
    //Replace ASCII comparisons with → isupper(), islower(), isalpha() from <cctype> below
    //...
  if (isalpha(ch)){
    if (isupper(ch))
      cout << "It is an uppercase letter" << endl;
    else if (islower(ch))
      cout << "It is a lowercase letter" << endl;
  }
  
      

    // 3. Convert a string to uppercase manually
    char word[50];
    cout << "Enter a word: ";
    cin >> word;
  /*
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] >= 'a' && word[i] <= 'z')
            word[i] = word[i] - 32;  // convert lowercase to uppercase
    }
    cout << "Uppercase word: " << word << endl;
    */
    //Replace ASCII value subtraction with → toupper() from <cctype> below
    //...
  
    for (int i = 0; word[i] != '\0'; i++) {
        word[i] = toupper(word[i]);
    }
    cout << "Uppercase word: " << word << endl;
  
    // 4. Find length of string manually
    int length = 0;
  /*
    while (word[length] != '\0') {
        length++;
    }
    cout << "Manual string length = " << length << endl;
  */

    //Replace manual loop with → strlen() from <cstring> below
    //...
    length = strlen(word);
    cout << "String length  = " << length << endl;

    return 0;
}
