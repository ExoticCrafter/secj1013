/* 
GROUP MEMBERS: 1. YONG SEE EN (A25CS0168)
               2. MUHAMMAD HAFIZ BIN SUHAILI (A25CS0106)
   SET NUMBER: 1
   GROUP : 5
   SECTION : 02
   DR MUHAMMAD LUQMAN BIN MUHAMMAD SHAFIE
   DATE: 20/12/2025 
*/
   
#include <iostream>
#include <cctype>
#include <cmath>
#include <iomanip>
using namespace std;

int getAge();
char getGender();
double calcBMR(int, char, double, double);

int main()
{
   int age;
   char gender, ch;
   double weight, height, BMR;

   do
   {
      cout << "Basal Metabolic Rate (BMR) Calculator" << endl << endl;

      age = getAge();
      gender = getGender();

      cout << "Height (cm):\t";
      cin >> height;
      cout << "Weight (kg):\t";
      cin >> weight;

      BMR = calcBMR(age, gender, weight, height);
      cout << fixed << setprecision(2);
      cout << "\nBMR = " << BMR << " Calories/ day (using Mifflin-St Jeor Equation)" << endl;

      cout << "\nDaily calorie needs based on activity level" << endl;
      cout << "\nActivity Level \t\t\t\t\t  Calorie" << endl;
      cout << "Sedentary: little or no exercise\t\t  " << static_cast<int>(round(BMR * 1.2)) << endl;
      cout << "Exercise 1-3 times/week\t\t\t\t  " << static_cast<int>(round(BMR * 1.375)) << endl;
      cout << "Exercise 4-5 times/week\t\t\t\t  " << static_cast<int>((BMR * 1.465)) << endl;
      cout << "Daily exercise or intense exercise 3-4 times/week " << static_cast<int>(round(BMR * 1.55)) << endl;
      cout << "Intense exercise 6-7 times/week\t\t\t  " << static_cast<int>((BMR * 1.725)) << endl;
      cout << "Very intense exercise daily, or physical job\t  " << static_cast<int>((BMR * 1.9)) << endl << endl;

      cout << "Exercise: 15-30 minutes of elevated heart rate activity." << endl;
      cout << "Intense exercise: 45-120 minutes of elevated heart rate activity." << endl;
      cout << "Very intense exercise: 2+ hours of elevated heart rate activity." << endl << endl;

      cout << "Do you want to enter other data? [Y @ N]: ";
      cin >> ch;
      ch = toupper(ch);
      cout << endl << endl;
   } while (ch == 'Y');

   cout << "\nThank you :)" << endl;

   return 0;
   
}

int getAge()
{
   int age;
   do
   {
      cout << "Age [15-80]: ";
      cin >> age;
   } while ((age < 15) || (age > 80));
   return age;
}

char getGender()
{
   char gender;
   do 
   {
      cout << "Gender [F @ M]: ";
      cin >> gender;
      gender = toupper(gender);
   } while ((gender != 'F') && (gender != 'M'));
   return gender;
}

double calcBMR(int a, char g, double w, double h)
{
   double bmr;

   if (g == 'F')
      bmr = (10 * w) + (6.25 * h) - (5 * a) - 161;
   else 
      bmr = (10 * w) + (6.25 * h) - (5 * a) + 5;
   return bmr;
}

