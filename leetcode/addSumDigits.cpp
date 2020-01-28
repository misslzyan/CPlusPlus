#include <iostream>
using namespace std;
int sumDigits (int n) {
  if (n == 0) return 0;
  else if (n % 9 == 0) return 9;
  else return n % 9;
}

int main () {
  int n;
  cout << "Input a number:";
  cin >> n;
  cout << "Digits root of " << n << " is " << sumDigits(n) << endl;
  return 0;
}
