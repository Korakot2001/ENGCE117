#include <stdio.h>

struct data{
  int x;
  int y;
};

void byvalue(struct data b){
  b.x++;
  b.y++;
}

void byreference(struct data *c){
  c->x++;
  c->y++;
}

int main(){
  struct data a;
  a.x = 0;
  a.y = 0;

  printf("Original : (%d, %d)\n", a.x, a.y);

  byvalue(a);
  printf("pass by value : (%d, %d)\n", a.x, a.y);

  byreference(&a);
  printf("pass by reference: (%d, %d)\n", a.x, a.y);

  return 0;
}