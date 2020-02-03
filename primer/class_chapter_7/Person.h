#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <sstream>

class Person {
private:
  std::string name;
  std::string address;

public:
  //constructor
  Person():name("name"),address("address"){}
  Person(const std::string &s):name(s){}
  Person(const std::string &s, const std::string a):name(s), address(a){}
  Person(std::istream &);
  // copy constructor
  Person(const Person&);
  std::string getName() const;
  std::string getAddress() const;
  Person& setName(std::string &&);
  Person& setAddress(std::string &&);
  Person& combine(Person &);
};

Person::Person(std::istream &is) {
  std::string name;
  std::string address;
  is >> name >> address;
  this -> name = name;
  this -> address  = address;
}

Person::Person(const Person &p) {
}

std::string Person::getName() const{
  return this -> name;
}

std::string Person::getAddress() const{
  return this -> address;
}

Person& Person::setName(std::string &&name) {
  this -> name = std::move(name);
  return *this;
}

Person& Person::setAddress(std::string &&address) {
  this -> address = std::move(address);
  return *this;
}

//nonmember function.
std::string toString (Person &p) {
  std::stringstream ss;
  ss << "Name:" << p.getName() << " Address:" << p.getAddress() << "\n";
  return ss.str();
}

Person& Person::combine(Person &p) {
  this -> name += p.name;
  this -> address += p.address;
  return *this;
}

Person add(Person &lhs, Person &rhs) {
  Person tmp = lhs;
  tmp.combine(rhs);
  return tmp;
}
#endif
