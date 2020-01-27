#include <iostream>
#include <vector>
using namespace std;
int main () {
  int a[] = {1, 2, 3, 4 ,5 ,6 ,7};
  vector<int> b(begin(a), end(a));
  for (auto c : b) {
    cout << c << " ";
  }
  cout << endl;
  int bb[7];
  size_t i = 0;
  for (auto c : b) {
    bb[i++] = c;
  }
  for (auto c : bb) {
    cout << c << " ";
  }
  cout << endl;
  return 0;
}
