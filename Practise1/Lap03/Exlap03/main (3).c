#include <stdio.h>


struct score {
  int cost;
};

void write(struct score * b) {
  printf("(%d)\n", b->cost);
}

int main() {
  struct score a = {10};
  write(&a);

  return 0;
}