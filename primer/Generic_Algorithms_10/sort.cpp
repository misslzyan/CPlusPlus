#include <iostream>
#include <string>
#include <vector>
#include <sstream>
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
  std::cout << "\n";
}
