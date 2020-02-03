#include <iostream>
#include <vector>
using namespace std;
int main () {
  int a[10];
  for (size_t i = 0; i != 10; i++) {
    a[i] = i;
  }
  for (auto i : a) {
    cout << i << " ";
  }
  cout << endl;
  int b[10];
  for (size_t i = 0; i != 10; i++) {
    b[i] = a[i];
  }

  for (auto i : b) {
    cout << i << " ";
  }
  cout << endl;
  vector<int> v1;
  for (decltype(v1.size()) i = 0; i != 10; i++) {
    v1.push_back(i);
  }
  for (auto i : v1) {
    cout << i << " "; 
  }
  cout << endl;
  vector<int> v2 = v1;
  for (auto i : v2) {
    cout << i << " "; 
  }
  cout << endl;
  return 0;
}
