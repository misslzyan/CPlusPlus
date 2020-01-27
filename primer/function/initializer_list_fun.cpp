#include <iostream>
using namespace std;
int sum(initializer_list<int> ii) {
  int sum = 0;
  for (auto i : ii) {
    sum += i;
  }
  return sum;
}
int main () {
  initializer_list<int> p = {1, 2, 3, 4, 5};
  int sum1 = sum({1, 2, 3, 4, 5});
  cout << sum1 << endl;
  return 0;
}
