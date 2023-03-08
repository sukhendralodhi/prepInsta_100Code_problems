#include <iostream>
using namespace std;

int sumNatural(int num) {
  int sum = 0;
  for (int i = 1; i <= num; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;

  if (n < 0 || n == 0) {
    cout << "provide correct input!";
  } else {
    cout << "Sum of " << n << " Natural Numbers is = " << sumNatural(n);
  }
}