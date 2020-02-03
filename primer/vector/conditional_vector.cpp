#include <iostream>
#include <vector>
using namespace std;
int main () {
  vector<int> v;
  for (size_t i = 0; i != 10; i++) {
    v.push_back(i);
  }
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  for (auto &i : v) {
    i % 2 == 0 ? i = i : i = i * 2;
  }
  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
