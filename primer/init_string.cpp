#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1;
  string s2 = "abc";
  string s3("bcd");
  string s4(11,'c');
  string s5(s4);
  cout << "s1:" << s1<<"\n";
  cout << "s2:" << s2<<"\n";
  cout << "s3:" << s3<<"\n";
  cout << "s4:" << s4<<"\n";
  cout << "s5:" << s5<<"\n";
  cout << "Input string:";
  string s6, s7;
  cin >> s6 >> s7;
  cout << "Input string is :" << s6 << "\n";
  cout << "size is :" << s6.size() << "\n";
  cout << "the first char is :" << s6[0] << endl;
  cout << "Input string is :" << s7 << "\n";
  cout << "size is :" << s7.size() << "\n";
  cout << "the first char is :" << s7[0] << endl;
  return 10;
}
