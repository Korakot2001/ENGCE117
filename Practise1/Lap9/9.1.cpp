#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct studentNode{
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

class LinkedList{
    protected:
        struct studentNode *start, **now;

    public:
        LinkedList();
        ~LinkedList();
        void InsNode(char n[], int a, char s, float g);
        void DelNode();
        void GoNext();
        void GoFirst();
        void GoLast();
        void ShowAll();
        int FindNode(char n[]);
        struct studentNode *NowNode();
        void EditNode(char n[], int a, char s, float g);
}; // end class

void EditData( LinkedList *ll ) ;
void AddData( LinkedList *ll ) ;
void FindData( LinkedList *ll ) ;
void readfile( LinkedList *ll ) ;
void writefile( LinkedList *ll ) ;

int main(){
    LinkedList listA;
    int menu;
    printf( "Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : " );
    scanf( "%d", &menu ) ;
    while( menu != 0 ) {
        switch( menu ) {
            case 1 : printf("1") ; break ;
            case 2 : printf("2") ; break ;
            case 3 : printf("3") ; break ;
            case 4 : printf("4") ; break ;
            case 5 : printf("5") ; break ;
        } //end switch
        printf( "Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : " );
        scanf( "%d", &menu ) ;
    } //end loop
    return 0;
}

LinkedList ::LinkedList()
{
  start = NULL;
}

LinkedList ::~LinkedList()
{
  delete start;
  delete now;
}

void LinkedList ::InsNode(char n[], int a, char s, float g){
    struct studentNode *temp = new studentNode;
    strcpy(temp->name, n);
    temp->age = a;
    temp->sex = s;
    temp->gpa = g;
    temp->next = NULL;

    if(start == NULL){
        start = temp;
    }
    else{
        struct studentNode *current = start;
        while(current->next != NULL){
            current = current->next;
        }
        current->next = temp;
    }
}
