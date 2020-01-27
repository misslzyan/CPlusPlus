#include <iostream>
#include <string>
using namespace std;

void reset(int &i) {
  i = 0;
}

void reset (int *i) {
  *i = 0;
}

bool isShorter (const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

string::size_type find_char(const string &s, char c, string::size_type &occurs) {
  auto ret = s.size();
  for (decltype(ret) i = 0; i != s.size(); i++) {
    if (s[i] == c) {
      occurs++;
      if (ret == s.size()) {
        ret = i;
      }
    }
  }
  return ret;
}

void swap(int &i, int &j) {
  int tmp = i;
  i = j;
  j = tmp;
}

bool is_sentence(const string &s) {
  string::size_type ctr = 0;
  return find_char(s, '.', ctr) == s.size() - 1 && ctr == 1;
}

int main () {
  int i = 42;
  reset(i);
  cout << i << endl;
  i = 42;
  reset(&i);
  cout << i << endl;
  string s1 = "a string";
  string s2 = "some string";
  cout << isShorter(s1, s2) << endl;
  string::size_type cnt;
  auto index = find_char(s2, 's', cnt);
  cout << "\"" << s2 << "\" have " << cnt << "'" << "s" << "'" << "\n";
  cout << "the first is :" << index <<endl; 
  int x = 1, y = 2;
  swap(x, y);
  cout << x << " " << y << endl;
  string sentence = "I am a boy.";
  cout << "is_sentence: " << is_sentence(sentence);
  return 0;
}
