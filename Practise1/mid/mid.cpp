

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

void UpdateNode(struct StructureNode **head, int ref, int want) {
  if ( *head == NULL)
    return;
  struct StructureNode *prevref = NULL, *currref = *head;
  while (currref && currref -> data != ref) {
    prevref = currref;
    currref = currref -> next;
  }

  if (currref == NULL)
    return;

  currref -> data = want;
} //end function

void SwapNode(struct StructureNode **head, int first, int second) {
    if (*head == NULL)
        return;
    struct StructureNode *prevfirst = NULL, *currfirst = NULL;
    struct StructureNode *prevsecond = NULL, *currsecond = NULL;
    struct StructureNode *temp = *head;
    for (int i = 0; temp != NULL; i++) {
        if (temp->data == first) {
            prevfirst = (i == 0) ? NULL : *head;
            for (int j = 0; j < i - 1; j++) {
                prevfirst = prevfirst->next;
            }
            currfirst = temp;
        }
        if (temp->data == second) {
            prevsecond = (i == 0) ? NULL : *head;
            for (int j = 0; j < i - 1; j++) {
                prevsecond = prevsecond->next;
            }
            currsecond = temp;
        }
        temp = temp->next;
    }//เอาไว้จำเลขไว้
    if (currfirst == NULL || currsecond == NULL)
        return;
    if (prevfirst != NULL)
        prevfirst->next = currsecond;
    else
        *head = currsecond;
    if (prevsecond != NULL)
        prevsecond->next = currfirst;
    else
        *head = currfirst;
    temp = currsecond->next;
    currsecond->next = currfirst->next;
    currfirst->next = temp;
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
  Showback(head);
  printf("\n");
  ShowAll(head); //4, 3, 2, 98
  printf("\n------------------------------\n");
  printf(" SwapNode\n");
  SwapNode( & head,6, 3);
  ShowAll(head); //3, 4, 98, 2
}

