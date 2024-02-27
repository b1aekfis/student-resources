#include <stdio.h>
#include <ctype.h>

// http://www.tutorialspoint.com/c_standard_library/

int main() {
    // isalpha
    // isalnum
    /*int i;
    char str[]="c3po...";
    i=0;
    while (isalnum(str[i]))
        i++;
    printf ("The first %d characters are alphanumeric.\n",i);*/

    // isblank
    /*char c;
    int i=0;
    char str[]="Example sentence to test isblank\n";
    while (str[i]) {
        c=str[i];
        if (isblank(c))
            c='\n';
        putchar (c);
        i++;
    }*/

    // iscntrl
    /*int i=0;
    char str[]="first line \n second line \n";
    while (!iscntrl(str[i])) {
        putchar (str[i]);
        i++;
    }*/

    // isdigit
    /*char str[]="1776ad";
    int year;
    int i = 0;
    while (isdigit(str[i]))
        i++;
    printf ("The first %d characters are numeric.\n",i);*/

    // isgraph
    /*int var1 = '3';
    int var2 = '\t';
    int var3 = ' ';

    if( isgraph(var1) ) {
        printf("var1 = |%c| can be printed\n", var1 );
    } else {
        printf("var1 = |%c| can't be printed\n", var1 );
    }
    if( isgraph(var2) ) {
        printf("var2 = |%c| can be printed\n", var2 );
    } else {
        printf("var2 = |%c| can't be printed\n", var2 );
    }
    if( isgraph(var3) ) {
        printf("var3 = |%c| can be printed\n", var3 );
    } else {
        printf("var3 = |%c| can't be printed\n", var3 );
    }*/

    // islower
    /*int var1 = 'Q';
    int var2 = 'q';
    int var3 = '3';

    if( islower(var1) ) {
        printf("var1 = |%c| is lowercase character\n", var1 );
    } else {
        printf("var1 = |%c| is not lowercase character\n", var1 );
    }
    if( islower(var2) ) {
        printf("var2 = |%c| is lowercase character\n", var2 );
    } else {
        printf("var2 = |%c| is not lowercase character\n", var2 );
    }
    if( islower(var3) ) {
        printf("var3 = |%c| is lowercase character\n", var3 );
    } else {
        printf("var3 = |%c| is not lowercase character\n", var3 );
    }*/

    // isupper
    int var1 = 'M';
    int var2 = 'm';
    int var3 = '3';

    if( isupper(var1) ) {
        printf("var1 = |%c| is uppercase character\n", var1 );
    } else {
        printf("var1 = |%c| is not uppercase character\n", var1 );
    }
    if( isupper(var2) ) {
        printf("var2 = |%c| is uppercase character\n", var2 );
    } else {
        printf("var2 = |%c| is not uppercase character\n", var2 );
    }
    if( isupper(var3) ) {
        printf("var3 = |%c| is uppercase character\n", var3 );
    } else {
        printf("var3 = |%c| is not uppercase character\n", var3 );
    }

    // isprint
    /*int var1 = 'k';
    int var2 = '\n';
    int var3 = '\t';
    int var4 = ' ';

    if( isprint(var1) ) {
        printf("var1 = |%c| can be printed\n", var1 );
    } else {
        printf("var1 = |%c| can't be printed\n", var1 );
    }
    if( isprint(var2) ) {
        printf("var2 = |%c| can be printed\n", var2 );
    } else {
        printf("var2 = |%c| can't be printed\n", var2 );
    }
    if( isprint(var3) ) {
        printf("var3 = |%c| can be printed\n", var3 );
    } else {
        printf("var3 = |%c| can't be printed\n", var3 );
    }
    if( isprint(var4) ) {
        printf("var4 = |%c| can be printed\n", var4 );
    } else {
        printf("var4 = |%c| can't be printed\n", var4 );
    }*/

    // ispunct
    /*int var1 = 't';
    int var2 = '1';
    int var3 = '/';
    int var4 = ' ';

    if( ispunct(var1) ) {
        printf("var1 = |%c| is a punctuation character\n", var1 );
    } else {
        printf("var1 = |%c| is not a punctuation character\n", var1 );
    }
    if( ispunct(var2) ) {
        printf("var2 = |%c| is a punctuation character\n", var2 );
    } else {
        printf("var2 = |%c| is not a punctuation character\n", var2 );
    }
    if( ispunct(var3) ) {
        printf("var3 = |%c| is a punctuation character\n", var3 );
    } else {
        printf("var3 = |%c| is not a punctuation character\n", var3 );
    }
    if( ispunct(var4) ) {
        printf("var4 = |%c| is a punctuation character\n", var4 );
    } else {
        printf("var4 = |%c| is not a punctuation character\n", var4 );
    }*/

    // isspace
    /*' '     (0x20)    space (SPC)
    '\t'    (0x09)  horizontal tab (TAB)
    '\n'    (0x0a)  newline (LF)
    '\v'    (0x0b)  vertical tab (VT)
    '\f'    (0x0c)  feed (FF)
    '\r'    (0x0d)  carriage return (CR)*/
    /*int var1 = 't';
    int var2 = '1';
    int var3 = ' ';

    if( isspace(var1) ) {
        printf("var1 = |%c| is a white-space character\n", var1 );
    } else {
        printf("var1 = |%c| is not a white-space character\n", var1 );
    }
    if( isspace(var2) ) {
        printf("var2 = |%c| is a white-space character\n", var2 );
    } else {
        printf("var2 = |%c| is not a white-space character\n", var2 );
    }
    if( isspace(var3) ) {
        printf("var3 = |%c| is a white-space character\n", var3 );
    } else {
        printf("var3 = |%c| is not a white-space character\n", var3 );
    }
    */

    //isxdigit
    /*char var1[] = "tuts";
    char var2[] = "0xE";

    if( isxdigit(var1[0]) ) {
        printf("var1 = |%s| is hexadecimal character\n", var1 );
    } else {
        printf("var1 = |%s| is not hexadecimal character\n", var1 );
    }
    if( isxdigit(var2[0] )) {
        printf("var2 = |%s| is hexadecimal character\n", var2 );
    } else {
        printf("var2 = |%s| is not hexadecimal character\n", var2 );
    }*/
    return 0;
}
