// getchar Function in C

#include <stdio.h>
#define MAX 50

int main(){
    char c;
    char ten[MAX] = "";
    printf("Dien ho va ten, nhan ENTER de hoan tat\n");
    int i = 0;
    printf("\n>> ");
    do
    {
        c = getchar(); // scanf("%c", &c);
        ten[i] = c;
        i++;
    }
    while (c != '\n');
    printf("\nxin chao %s", ten);
    getchar();
    return 0;
}