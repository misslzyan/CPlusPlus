#include <iostream>
#include <string>
#include <vector>
#include <sstream>
bool notSpace(char ch) {
  return !isspace(ch);
}

void trim(std::string &str) {
  str.erase(str.begin(), std::find_if(str.begin(), str.end(), notSpace));
  str.erase(std::find_if(str.rbegin(), str.rend(), notSpace).base());
}

void print(std::string &str) {
  std::cout << str << "\n";
}

void print(std::vector<int> &arr) {
  for (auto i : arr) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}

std::vector<int> parseToVector(const std::string &str) {
  std::istringstream inputStr(str);
  char delim = ',';
  std::string word;
  std::vector<int> result;
  while(getline(inputStr, word, delim)){
    result.push_back(stoi(word));
  }
  return result;
}

class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
         if(arr.empty()) return true;
        std::size_t n_size = arr.size();
        if(n_size==1) return true;
        std::sort(arr.begin(), arr.end());
        std::vector<int> counts;
        int count = 0;
        for(int i = 0;i<n_size;i++){
            count++;
            if(i==n_size-1){
                counts.push_back(count);
            }else{
                if(arr[i]==arr[i+1]){
                    continue;
                }else{
                    counts.push_back(count);
                    count = 0;
                }
            }
        }
        if(counts.size()==1)return true;
        n_size = counts.size();
        std::sort(counts.begin(), counts.end());
        for(int i = 0 ;i< n_size;i++){
            if(i>0&&counts[i]==counts[i-1]){
                return false;
            }
        }
        return true;
    }
};

void print(bool b) {
  if(b)
    std::cout << "True";
  else
    std::cout << "False";
  std::cout << "\n";
}

int main(int argc, char* argv[]){
  std::string line;
  //input like [1,2,3,4]
  while(getline(std::cin, line)) {
    trim(line);
    line = line.substr(1, line.length()-2);  // the second param is the number of chars.
   // line = line.substr(1, 2);
    std::vector<int> arr = parseToVector(line);
    bool res = Solution().uniqueOccurrences(arr);
   // print(arr);
    print(res);
  }
}
