# define NDEBUG 
// define NDEBUG can disable assertions.
# include <iostream>
# include <assert.h>
int main() {
  int i = 7;
  i = 9;
  assert(i==7);
  return 0;
}
