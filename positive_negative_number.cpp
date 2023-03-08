#include <iostream>
using namespace std;

void brute() {
  int n;
  cout << "Enter the number: ";
  cin >> n;

  if (n > 0) {
    cout << "Number is positive";
  } else if (n < 0) {
    cout << "Number is negative";
  } else {
    cout << "Number is zero";
  }
}

void nested() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  if (n >= 0) {
    if (n == 0) {
      cout << "Number is zero";
    } else {
      cout << "Number is positive";
    }
  } else {
    cout << "Number is negative";
  }
}

void ternary() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  (n == 0)  ? cout << "number is zero"
  : (n < 0) ? cout << "Number is negative"
            : cout << "Number is positive";
}

int main() {
  int exp;
  cout << "Enter the value:" << endl
       << "1 for Brute method" << endl
       << "2 for nested if" << endl
       << "3 for ternary" << endl;
  cin >> exp;

  switch (exp) {
  case 1:
    cout << "You choose Brute:" << endl;
    brute();
    break;

  case 2:
    cout << "You choose nested if:" << endl;
    nested();
    break;
  case 3:
    cout << "You chhose ternary:" << endl;
    ternary();
    break;

  default:
    cout << "Please chhose valid input: ";
    break;
  }
}