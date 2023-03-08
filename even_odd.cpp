#include <iostream>
using namespace std;

void brute() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  if (n > 0) {
    if (n % 2 == 0) {
      cout << "Even number";
    } else {
      cout << "Odd number:";
    }
  } else {
    cout << "Enter the positive number:";
  }
}

void ternary() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  (n == 0 || n < 0) ? cout << "Please enter positive number"
  : (n % 2 == 0)    ? cout << "Even number!"
                    : cout << "Odd number!";
}

int main() {
  int exp;
  cout << "Enter the value:" << endl
       << "1 for Brute method" << endl
       << "2 for ternary" << endl;
  cin >> exp;

  switch (exp) {
  case 1:
    cout << "You choose Brute:" << endl;
    brute();
    break;

  case 2:
    cout << "You chhose ternary:" << endl;
    ternary();
    break;

  default:
    cout << "Please chhose valid input: ";
    break;
  }
}