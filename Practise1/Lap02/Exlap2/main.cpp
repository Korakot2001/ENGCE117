/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


char (*GetText2D( int row ))[14]{
    int i;
    char (*text)[14];
    for ( i = 0 ; i < row ; i++ ){
    	printf("Enter your string [%d] : ", i+1);
        scanf("%s", text[i]);
        printf("your string is %s\n",text[i]);
    }

    return text;
}

int main()
{
    char (*str)[14];
    int row;
    printf("How many rows do you want ? : ");
    scanf("%d", &row);
    printf("----------------------------------\n");
    str = GetText2D(row);
    printf("\nyou have string\n");
    for ( int i = 0 ; i < row ; i++ ){
        printf("%s\n", str[i]);
    }
    return 0;
}