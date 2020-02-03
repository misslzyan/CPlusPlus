#include <iostream>
#include <string.h>
using namespace std;
int main () {
  string word;
  string str[2];
  int count = 0;
  while (count < 2 && cin >> word) {
    count++;
    str[count - 1] = word;
  }
  str[0] == str[1] ? cout << str[0] << " is equal to " << str[1] : str[0] < str[1] ? cout << str[0] << " is less than " << str[1] : cout << str[0] << " is greater than " << str[1];
  cout << endl;
  return 0;
}
