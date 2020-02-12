#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[]) {
  if(argc != 3) {
    cerr << "usage : file_name1 file_name2" << endl;
    return 1;
  }
  string fileName1 = argv[1];
  string fileName2 = argv[2];
  cout << fileName1 << ":\n";
  ifstream in(fileName1);
  string line;
  while(getline(in, line)){
    cout << line << "\n";
  }
  cout << fileName2 << ":\n";
  in.close();
  in.open(fileName2);
  while(getline(in, line)){
    cout << line << "\n";
  }
  return 0;
}
