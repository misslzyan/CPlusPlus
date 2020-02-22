#include <iostream>
#include <memory>

int main () {
  std::allocator<std::string> al;
  const auto p = al.allocate(3);
  auto q = p;
  al.construct(q++);
  al.construct(q++, 10, 'c');
  al.construct(q++, "hi");
  //destroy
  al.destroy(--q);
  al.destroy(--q);
  al.destroy(--q);

  //release memory
  al.deallocate(p, 3);  
}
