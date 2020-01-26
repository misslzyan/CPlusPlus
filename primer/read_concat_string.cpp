#include <iostream>
#include <string.h>
using namespace std;
int main() {
  string word;
  int count;
  string res;
  while(count < 2 && cin >> word) {
    count ++;
    res = res + word;
  }
  cout << "res:" << res << endl;
  return 0;
}
