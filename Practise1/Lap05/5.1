#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode {
  char name[20];
  int age;
  char sex;
  float gpa;
  struct studentNode * next;
};

struct studentNode * AddNode(struct studentNode ** head, char n[], int a, char s, float g);
void InsNode(struct studentNode * prev, char n[], int a, char s, float g);
void DelNode(struct studentNode * prev);
void ShowAll(struct studentNode * walk);

int main() {
  struct studentNode * start, * now;
  start = NULL;
  now = AddNode( & start, "one", 6, 'M', 3.11);  ShowAll(start);
  now = AddNode( & start, "two", 8, 'F', 3.22);  ShowAll(start);
  InsNode(now, "three", 10, 'M', 3.33);  ShowAll(start);
  InsNode(now, "four", 12, 'F', 3.44);  ShowAll(start);
  DelNode(now);  ShowAll(start);
  return 0;
} //end function

void ShowAll(struct studentNode * walk) {
  while (walk != NULL) {
    printf("%s ", walk -> name);
    walk = walk -> next;
  }
  printf(" ");
} //end function

struct studentNode * AddNode(struct studentNode ** head, char n[], int a, char s, float g) {

  struct studentNode * newNode = (struct studentNode * ) malloc(sizeof(struct studentNode));

  strcpy(newNode -> name, n);
  newNode -> age = a;
  newNode -> sex = s;
  newNode -> gpa = g;
  newNode -> next = NULL;
  if ( * head == NULL) {
    * head = newNode;
  } else {
    newNode -> next = * head;
    * head = newNode;
  }

  return newNode;
} //end function

void InsNode(struct studentNode * prev, char n[], int a, char s, float g) {

  struct studentNode * newNode = (struct studentNode * ) malloc(sizeof(struct studentNode));

  strcpy(newNode -> name, n);
  newNode -> age = a;
  newNode -> sex = s;
  newNode -> gpa = g;
  newNode -> next = prev -> next;
  prev -> next = newNode;
} //end function

void DelNode(struct studentNode * prev) {
  struct studentNode * delNode = prev -> next;
  prev -> next = delNode -> next;
  free(delNode);
} //end function
