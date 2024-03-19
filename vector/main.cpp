#include "vector.hpp"
#include <cstdio>

int main() {
  vector<int> v(2);
  v.append(5);
  v.append(5);
  v.append(5);
  v.insert(3, 1);
  v.print();
  printf("Count of %d: %d\n", 5, v.count(5));
  v.remove(5, 2);
  v.print();
  printf("Size: %ld\n", v.size());
  printf("Count of %d: %d\n", 5, v.count(5));
  v.clear();
  v.print();
  return 0;
}
