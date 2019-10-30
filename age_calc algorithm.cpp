#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double age_calc(double num1, double num2, double num3)
{
  double r = 737727;
  double x = num1 * 365;
  double y = num2 * 30;
  double z = x + y + num3;
  double a = r - z;
  return a;
}


int main()
{
  int year_birth;
  int month_birth;
  int day_birth;

  cout << "Welcome to age calculator.\n";
  cout << "The purpose of this program is to calculate the user's age in days.\n";
  cout << "To begin, enter your year of birth: \n";
  cin >> year_birth;
  cout << "Enter the number that corresponds to your month of birth: \n";
  cin >> month_birth;
  cout << "Enter your day of birth: \n";
  cin >> day_birth;
  cout << "You are " << age_calc(year_birth, month_birth, day_birth) << " days old, however there is a margin of error of +- 5 days.";

  return 0;
}
