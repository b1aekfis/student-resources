// putchar Function in C

#include <stdio.h>

int main() {
    // How to output ?
    int ch;
    for (ch = 'a'; ch <= 'z' ; ch++){
        putchar(ch); // printf("%c \n" , ch);
    }
    printf("\n");

    // input to output
    int n = 0;
    ch = getchar();
    while (ch != EOF) {
        if (ch != '\n') { // không đếm phím ENTER là một character.
            n++;
        }
        putchar(ch);
        ch = getchar();
    }
    // đếm tổng n character getchar từ bàn phím
    printf("nchar >> %d\n", n);
    return 0;
}