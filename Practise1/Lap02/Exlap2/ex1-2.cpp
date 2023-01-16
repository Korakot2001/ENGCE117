#include <stdio.h>
#include <string.h>


char *getstr() { 
    char *text = new char[20];
    printf("Enter the text : ");
    gets(text);
    return text;
}

int main(){
    char str[20];
    strcpy (str, getstr());
    printf("text is : %s", str);
    return 0;
}
