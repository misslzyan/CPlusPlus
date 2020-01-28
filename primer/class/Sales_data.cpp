#include <iostream>
#include <string>
using namespace std;
struct Sales_data {
  //constructor added.
  //Sales_data():bookNo(1), units_sold(2), revenue(3){}
  Sales_data() = default;
  string isbn() const {return bookNo;}
  Sales_data& combine(const Sales_data&);
  double avg_price() const;
  //data member are unchanged from.
  std::string bookNo;
  unsigned units_sold = 0;
  double revenue = 0.0;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
  Sales_data sum = lhs;
  sum.combine(rhs);
  return sum;
}

std::ostream &print(std::ostream &os, const Sales_data &item){
  os << item.isbn() << " " << item.units_sold << " "
     << item.revenue << " " << item.avg_price();
  return os;
}

std::istream &read(std::istream &is, Sales_data &item) {
  double price = 0;
  is >> item.bookNo >> item.units_sold >> price;
  item.revenue = price * item.units_sold;
  return is;
}

double Sales_data::avg_price () const {
  if (units_sold) {
    return revenue/units_sold;
  } else {
    return 0;
  }
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
  units_sold += rhs.units_sold;
  revenue += rhs.revenue;
  return *this;
}

int main () {
  Sales_data item;
  print(cout, item);
  read(cin, item);
  print(cout, item);
}
