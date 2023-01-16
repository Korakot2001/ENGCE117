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
