#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
int main (int argc, char* argv[]) {
  std::string out_file("out_test");
  std::ofstream out(out_file);
  out << "hello world!";
  out.close();
  out.open(out_file);
  out << "hello world!";
  out.close();
  out.open(out_file, std::ostream::app);
  out << "hello world!";
  std::remove(out_file.c_str());  
}
