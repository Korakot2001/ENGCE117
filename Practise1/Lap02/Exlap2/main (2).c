/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void getstr( char *text ) { 
    printf("Enter the text : ");
    gets(text);
}

int main(){
    char str[20];
    getstr(str);
    printf("text is : %s", str);
    return 0;
}