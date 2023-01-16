#include <stdio.h>


struct score {
  int cost;
};

void plus(struct score b)
{
  b.cost++;
}

int main()
{
  struct score a;
  a.cost = 0;

  printf("before : %d\n", a.cost);
  plus(a);
  printf("after : %d\n", a.cost);

  return 0;
}