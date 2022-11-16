/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int num;
int max = 0;
int x = 0;
int i = 100;

int main()
{
    while(x < i)
    {
    x++;
    num = rand();
    printf("\n%d",num);
    if(num > 0)
    {
        if(x >= i)
        {
            
        }else
        {
            if(num > max)
            {
                max=num;
                printf(" the max is %d",max);
            }
        }
    }
    }
    printf("\ncomplete the max number is %d", max);
}
