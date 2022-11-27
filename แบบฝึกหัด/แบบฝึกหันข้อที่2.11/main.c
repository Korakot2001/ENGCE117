/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    int i;
    int n;
    int t=9;
    int sum=0;

    printf("enter number = ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum += t ;
        printf(" %d ",t);
        if(i<n-1){
            printf("+");
        }
        t=t*10+9;
        
    }
    
    printf("\nAnswer is = %d !!! wow",sum);
   
}
