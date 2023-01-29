

// นายกรกช ไตรอุโฆษ 65543206040-9 sec 2
#include <stdio.h>
#include <stdlib.h>

struct StructureNode {
  int data;
  struct StructureNode *next;
};

void AddNode(struct StructureNode **head, int newData) {
  struct StructureNode *newNode = (struct StructureNode * ) malloc(sizeof(struct StructureNode));
  newNode -> data = newData;
  newNode -> next = NULL;

  if ( * head == NULL) {
    * head = newNode;
    return;
  }
  struct StructureNode * curr = * head;
  while (curr->next != NULL) {
    curr = curr -> next;
  }
  curr -> next = newNode;
}
 //end function

void ShowAll(struct StructureNode * head) {
  struct StructureNode * temp = head;
  while (temp != NULL) {
    printf("%d ", temp -> data);
    temp = temp -> next;
  }
  printf(" ");
} //end function

void UpdateNode(struct StructureNode **head, int notKronfirst, int notKronsecond) {
  if ( *head == NULL)
    return;
  struct StructureNode *prevKronfirst = NULL, *currKronfirst = *head;
  while (currKronfirst && currKronfirst -> data != notKronfirst) {
    prevKronfirst = currKronfirst;
    currKronfirst = currKronfirst -> next;
  }

  if (currKronfirst == NULL)
    return;

  currKronfirst -> data = notKronsecond;
} //end function

void SwapNode(struct StructureNode **head, int Truefirst, int Truesecond) {
    if (*head == NULL)
        return;
    struct StructureNode *prevTruefirst = NULL, *currTruefirst = NULL;
    struct StructureNode *prevTruesecond = NULL, *currTruesecond = NULL;
    struct StructureNode *hero = *head;
    for (int i = 0; hero != NULL; i++) {
        if (hero->data == Truefirst) {
            prevTruefirst = (i == 0) ? NULL : *head;
            for (int j = 0; j < i - 1; j++) {
                prevTruefirst = prevTruefirst->next;
            }
            currTruefirst = hero;
        }
        if (hero->data == Truesecond) {
            prevTruesecond = (i == 0) ? NULL : *head;
            for (int j = 0; j < i - 1; j++) {
                prevTruesecond = prevTruesecond->next;
            }
            currTruesecond = hero;
        }
        hero = hero->next;
    }//เอาไว้จำเลขไว้
    if (currTruefirst == NULL || currTruesecond == NULL)
        return;
    if (prevTruefirst != NULL)
        prevTruefirst->next = currTruesecond;
    else
        *head = currTruesecond;
    if (prevTruesecond != NULL)
        prevTruesecond->next = currTruefirst;
    else
        *head = currTruefirst;
    hero = currTruesecond->next;
    currTruesecond->next = currTruefirst->next;
    currTruefirst->next = hero;
} //end function

void Showback(struct StructureNode *node) {
  if (node == NULL) {
    return;
  }
  Showback(node -> next);
  printf("%d ", node -> data);
} //end function

int main() {

  struct StructureNode * head = NULL;

  AddNode( & head, 1);
  AddNode( & head, 2);
  AddNode( & head, 3);
  AddNode( & head, 4);
  ShowAll(head); //1, 2, 3, 4
  printf("\n------------------------------\n");
  printf(" Update_Node 1 to 99 \n");
  UpdateNode( & head, 1, 99);
  ShowAll(head);
  printf("\n Update_Node 99 to 98 \n");
  UpdateNode( & head, 99, 98);
  ShowAll(head); //98, 2, 3, 4
  printf("\n------------------------------\n");
  printf(" Showback\n");
  Showback(head);//4, 3, 2, 98
  printf("\n");
  ShowAll(head); //98, 2, 3, 4
  printf("\n------------------------------\n");
  printf(" SwapNode\n");
  SwapNode( & head,6, 3);
  ShowAll(head); //3, 4, 98, 2
}

