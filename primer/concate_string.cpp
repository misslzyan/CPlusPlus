#include <iostream>
#include <string.h>
using namespace std;
int main(){
  string str1 = "hello", str2 = " world!";
  string str3 = str1 + str2;
  string str4 = str1 + " " + str2 + "\n";
  cout << "result: " << str3 << endl;
  cout << "str4: " << str4;
  return 0;
}
