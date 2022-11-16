/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int i;
int j;
int x;

int main()
{
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        j = i % 2;
        if(j != 0)
        {
            printf("%d\n", i );
        }
    }
}