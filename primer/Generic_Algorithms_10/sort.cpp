#include <iostream>
#include <string>
#include <vector>
#include <sstream>

bool isShorter(const std::string &word1, const std::string &word2) {
  auto s1 = word1.size();
  auto s2 = word2.size();
  if(s1 == s2) {
    return word1<word2;
  }
  return word1.size() < word2.size();
}

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
  
  std::sort(words.begin(), words.end(), isShorter);
  for(auto c : words) {
    std::cout << c << " ";
  }

  std::cout << "\n";
  std::stable_sort(words.begin(), words.end(), isShorter);
  for (const auto &c: words) {
    std::cout << c << " ";
  }
  std::cout << "\n";
  return 0;
}
