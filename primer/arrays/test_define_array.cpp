#include <iostream>
#include <string>
using namespace std;
int txt_size() {
  return 1024;
}
int main () {
  unsigned buf_size = 1024;
  int a1[buf_size];
  int a2[4*7 - 14];
  int a3[txt_size()];
//error  char c[11] = "fundamental";
  string sa[10];
  int ia[10];
  for ( auto c : sa) {
    cout << c << " ";
  }
  cout << endl;
  for ( auto c : ia) {
    cout << c << " ";
  }
  cout << endl;
  return 0;
}
