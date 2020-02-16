#include <iostream>
#include <string>
#include <vector>
#include <sstream>

void elimitWords(std::vector<std::string> &words) {
  std::sort(words.begin(), words.end());
  auto beginToErase = std::unique(words.begin(), words.end());
  words.erase(beginToErase, words.end());
}

int main () {
  std::string input_str = "the quick red fox jumps over the slow red turtle";
  std::string word;
  std::istringstream in_str(input_str);
  std::vector<std::string> words;
  while(in_str >> word) {
    words.push_back(word);
  }
  std::sort(words.begin(), words.end());
  for(auto w : words) {
    std::cout << w << " "; 
   }
  elimitWords(words);
  std::cout << "\n";
  for(auto w : words) {
    std::cout << w << " ";
  }
  std::cout << "\n";
  return 0;
}
