#include <iostream>
#include <string>
using namespace std;
int main() {
  string str("some string!");
  for(auto c : str) {
    cout << c << endl;
  }
  string str1("another string!!!");
  decltype(str1.size()) punct_cnt = 0;
  for (auto c : str1) {
    if (ispunct(c))
      ++punct_cnt;
  }
  cout << punct_cnt << " punctuation characters in " << str1 << endl;
  return 0;
}
