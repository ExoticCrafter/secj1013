#include <iostream>

using namespace std;

struct Address{
    string city;
    string state;
};
struct Student
{
    string name;
    int age;
    float gpa;
    Address address; //nested struct
};


int main(){
    const int SIZE = 2;
    Student stud[SIZE];
    //declaration type 1
    stud[0].name = "Ali";
    stud[0].age = 19;
    stud[0].gpa = 3.67f;
    stud[0].address.city = "Skudai";
    stud[0].address.state = "Johor";
    //declaration type 2
    stud[1] = {"Abu", 20, 3.23f,
                {"Seremban", "Negeri Sembilan"}};

    for (int i =0; i < SIZE; i++){
        cout << endl;
        cout << "Student "<< i+1 <<" details:\t"<< stud[i].name <<"\t"<< stud[i].age <<"\t"<< stud[i].gpa << endl ;
        cout << "City\t:" << stud[i].address.city << "\t\tState\t:" << stud[i].address.state << endl;
    }
       

    return 0;
}