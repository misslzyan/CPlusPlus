#include <stdio.h>
#define LIMIT 5

//define method
#define AREA(a, b) ((a)*(b))
int main(){
  for (int i=0;i<LIMIT;i++){
    printf("%d\n", i);
  }
  int l1 = 10, l2 = 11, area;
  area = AREA(l1, l2);
  printf("area is : %d\n", area);
  return 0;
}
