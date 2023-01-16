/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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