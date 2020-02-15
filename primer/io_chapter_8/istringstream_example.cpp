#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
struct PeopleInfo {
  std::string name;
  std::vector<std::string> phones;
  
  //funcs
  std::string to_string() {
    std::ostringstream ps;
    for (auto p : phones) {
      ps << p << " ";
    }
    ps << name;
    return ps.str();
  }
};

int main () {
  // define PeopleInfo
  std::vector<PeopleInfo> peoples;
  std::string line, phone;
  std::ifstream in("isstringstream_example.data");
  while (getline(in, line)) {
    PeopleInfo people;
    std::istringstream linestream(line);
    linestream >> people.name;
    while (linestream >> phone) {
      people.phones.push_back(phone);
    }
    peoples.push_back(people);
  }
  std::cout << "success!" << std::endl;
  for (auto p : peoples) {
    std::cout << p.to_string() << "\n";
  }
  return 0;
}
