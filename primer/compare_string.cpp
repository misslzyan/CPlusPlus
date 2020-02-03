#include <iostream>
#include <string.h>
using namespace std;
int main() {
  string str = "Hello";
  string phrase = "Hello World!";
  string slang = "Hiya";
  cout << "str < phrase:" << (str < phrase) << "\n";
  cout << "str < slang :" << (str < slang) << endl;
  return 0;
}
