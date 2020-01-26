#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main () {
  string word;
  unsigned count;
  vector<string> words;
  while (count != 10 && cin >> word) {
    count++;
    words.push_back(word);
  }
  for (auto &w : words) {
    for (auto &c : w) {
      c = toupper(c);
    }
  }
  for (auto w : words) {
    cout << w << " ";
  }
  cout << endl;
  for (decltype(words.size()) i = 0; i < words.size(); i++) {
    cout << words[i] << " ";
    if ((i+1) % 3 == 0) {
      cout << "\n";
    }
  }
  cout << endl;
  return 0;
} 
