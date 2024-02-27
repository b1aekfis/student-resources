#include <stdio.h>
#include <ctype.h> // isalpha

int main(){
    char c;
    int i = 0;
    while ((c = getchar()) != '\n'){
        if (isalpha(c)){
            putchar(c + 2);
            ++i;
        }
        else{
            putchar(c); 
        }
    }
    printf("\n%d-character was to encrypted\n", i);
}