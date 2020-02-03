#include <iostream>
#include <string>
using namespace std;

string& reverse_words(string & s) {
  for (int i = 0; i != s.length(); i++){
    if(s[i] != ' '){
      int j = i;
      while (j < s.length() && s[j] != ' ') j++;
      reverse(s.begin() + i, s.begin() + j);
      i = j - 1;
    }
  }
  return s;
}

int main () {
  string sentence = "She loves chocolate ";
  cout << "Input:" << sentence << endl;
  cout << "Output:" << reverse_words(sentence) << endl;
  return 0;
}
