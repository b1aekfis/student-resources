#include <stdio.h>

int StrLen(char s[])
{
    int i = 0;
    while (s[i] != '\0'){ // '\0' ky tu ket thuc chuoi
        ++i;
    }
    return i;
}
int main()
{
    char String_1[] = "DUONG THANH QUI";
    printf("len = %d,\t%s\n", StrLen(String_1), String_1);
    char String_2[] = "\0";
    printf("len = %d,\t%s\n", StrLen(String_2), String_2);
    char String_3[] = "luoi " "bieng\0";
    printf("len = %d,\t%s\n", StrLen(String_3), String_3);
    return 0;
}