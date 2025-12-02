#include <iostream>

using namespace std;

int main(){
    double length, width;

    char typeOfHouse[50];
    int numOfTimes, count =0;
    cout << "Enter house type:\t";
    cin >> typeOfHouse;

    cout << "How many times to calc the area?\n";
    cin >> numOfTimes;

    while (numOfTimes > count){
        cout << "Enter length and width" << endl;
        cin >> length >> width;
        double area = length * width;

        cout << "Are of rectangle (" << length << " x " << width << ") for house type " << typeOfHouse << " is ";
        cout << static_cast<int>(area) << endl;

        numOfTimes--;
    }
    return 0;
}