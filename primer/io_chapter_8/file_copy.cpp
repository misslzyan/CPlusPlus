#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[]) {
  if (argc != 2) {
    cout << "usage:\n";
    cout << "param: file name" << endl; 
    return 0;
  }
  ifstream in(argv[1]);
  string outfile = argv[1];
  outfile = outfile + ".out";
  ofstream out(outfile);
  string line;
  while(getline(in, line)) {
    out << line << "\n";
  }
  out << flush;
  return 0;
}
