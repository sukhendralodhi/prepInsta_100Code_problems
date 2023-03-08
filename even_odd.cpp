#include <iostream>
using namespace std;

void evenOdd(int num) {
  (num == 0 || num < 0) ? cout << "Please enter positive number"
  : (num % 2 == 0)      ? cout << "Even number!"
                        : cout << "Odd number!";
}

int main() {
  int number;
  cout << "Enter the number: ";
  cin >> number;
  evenOdd(number);
}