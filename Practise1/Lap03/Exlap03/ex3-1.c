#include <stdio.h>


struct score {
  int cost;
};

void write(struct score a) {
  printf("score is %d\n", a.cost);
}

int main() {
  struct score a = {20};
  write(a);

  return 0;
}