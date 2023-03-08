#include <iostream>
using namespace std;

void positveNegative(int number) {
  // if(number == 0) {
  //   cout << "You enter zero!";
  // }
  // else if(number < 0) {
  //   cout << "Negative number!";
  // }
  // else {
  //   cout << "Positive number!";
  // }
  (number == 0)  ? cout << "number is zero"
  : (number < 0) ? cout << "Number is negative"
                 : cout << "Number is positive";
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  positveNegative(n);
}