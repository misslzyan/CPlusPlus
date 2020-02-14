#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int main (int argc, char *argv[]){
  if (argc != 2) {
    cerr << "error" << endl;
    return 0;
  }
  vector<string> lines;
  string fileName = argv[1]; 
  ifstream in(fileName);
  string line;
  while(getline(in, line)){
//    cout << line << "\n";
    lines.push_back(line);
  }
  in.close();
  for(auto l : lines) {
    cout << l << "\n";
  }
  
  vector<string> words;
  string word;
  in.open(fileName);
  while(in >> word) {
    words.push_back(word);
  }
  for (auto w : words) {
    cout << w << "\n";
  }
  return 0;
}
