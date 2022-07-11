#include<stdio.h>
#include<ctype.h>

int main() {

    char s1[100];
    int size, i;


    printf("enter text: ");
    scanf("%s", s1);
    printf( "\t\nUpper case text here : \n");

    for (i=0; s1[i] != 0; ++i) {

        printf( "%c",toupper(s1[i]));

    }

    printf( "\t\nLower case text here : \n" );

    for (i=0;s1[i] != 0; ++i) {

        printf("%c",tolower(s1[i]));

    }


    }


