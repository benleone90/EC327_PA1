#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
  // Constants for grade values; will not change
  const double A = 4.00;
  const double A_MINUS = 3.70;
  const double B_PLUS = 3.30;
  const double B = 3.00;
  const double B_MINUS = 2.70;
  const double C_PLUS = 2.30;
  const double C = 2.00;
  const double C_MINUS = 1.70;
  const double D = 1.00;
  const double F = 0.00;

  string grade;
  double total = 0;

  for (int i=0; i <= 4; i++){
    cout << "Please enter your grade for Class " << i+1 << endl;
    cin >> grade;
    cin.ignore();
    // Checking to ensure input can be accepted as either lowercase or uppercase
    if(grade == "a" || grade == "A"){
      total += A;
    }
    else if(grade == "a-" || grade == "A-"){
      total += A_MINUS;
    }
    else if(grade == "b+" || grade == "B+"){
      total += B_PLUS;
    }
    else if(grade == "b" || grade == "B"){
      total += B;
    }
    else if(grade == "b-" || grade == "B-"){
      total += B_MINUS;
    }
    else if(grade == "c+" || grade == "C+"){
      total += C_PLUS;
    }
    else if(grade == "c" || grade == "C"){
      total += C;
    }
    else if(grade == "c-" || grade == "C-"){
      total += C_MINUS;
    }
    else if(grade == "d" || grade == "D"){
      total += D;
    }
    else if(grade == "f" || grade == "F"){
      total += F;
    }
    else{
      cout << "Not an accepted letter grade." << endl;
      return -1;
    }
  }
  // Setting precision of the decimal to two places
  cout << "Your GPA is " << setprecision(2) << fixed << (total/5.00) << "!" << endl;
  return 0;
}