#include <stdio.h>

void getstr( char **text ) { 
    *text = new char[20];
    printf("Enter the text : ");
    gets(*text);
}

int main(){
    char *str;
    getstr(&str);
    printf("text is : %s", str);
    return 0;
}
