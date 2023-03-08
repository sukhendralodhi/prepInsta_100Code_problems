#include <iostream>
using namespace std;

void forLoop() {
  int num;
  cout << "Enter the number: ";
  cin >> num;
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  cout << "Sum = " << sum;
}

void formula() {
  int num;
  cout << "Enter the number: ";
  cin >> num;
  int sum = (num * (num + 1) / 2);
  cout << "Sum = " << sum;
}

int recursion(int n) {
  if (n == 0) {
    return n;
  } else {
    return n + recursion(n - 1);
  }
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  int sum = recursion(n);
  cout << "Sum = " << sum << endl;
  // forLoop();
  // formula();
}